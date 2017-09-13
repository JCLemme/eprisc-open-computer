; epRISC development platform - Lemon Monitor
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Basic machine-code monitor. Inspired by Steve Wozniack's Wozmon.


!zone   lemon_defs

!def    REG_CURADDR     %Xw     ; Address stored by user
!def    REG_CURDATA     %Xx     ; Data buffer while interpreting input
!def    REG_INDXPTR     %Xy     ; Pointer to input buffer
!def    REG_CURMODE     %Xz     ; Current mode of the interpreter

!def    REG_RNPTCNT     %Yx     ; Temp - number of characters entered
!def    REG_CHARBUF     %Yx     ; Temp - character at location
!def    REG_TLENGTH     %Yy     ; Temp - length of words to print
!def    REG_ACROSSL     %Yz     ; Temp - counter for printed words

!def    DAT_BUSBASE     #h2000  ; Base address of the bus controller
!def    DAT_INPBASE     #h1000  ; Base address of the input buffer

!def    CHR_BACK        #h08    ; Backspace character
!def    CHR_ENTER       #h0D    ; Enter character
!def    CHR_PROMPT      #h3E    ; Prompt character
!def    CHR_RUN         #h52    ; Run mode character
!def    CHR_BLOCK       #h2E    ; Block mode character
!def    CHR_WRITE       #h3A    ; Write mode character

:lemon_strwel   !str "Lemon v0.2 - for epRISC v5 systems\0"

; ---------

!zone   lemon_stub

:lemon_putc     subr.v  d:%SP a:%SP v:#h01
                pops.r  d:%Zz
                addr.v  d:%SP a:%SP v:#h02
                push.r  s:%Zz
                
                call.s  a:ser_send
                ;call.s  a:vga_putc
                
                pops.r  d:%Zz
                rtrn.s
            
:lemon_putcs    brch.a  a:ser_send

:lemon_putcv    brch.a  a:vga_putc

:lemon_getc     brch.a  a:ser_srcv

:lemon_putn     brch.a  a:str_hnum

:lemon_puts     brch.a  a:str_puts

:lemon_eror     brch.a  a:dbg_eror

; ---------

!zone   lemon_ihdl

:lemon_entr     move.v  d:%SP v:#h17FF                              ; Put the stack somewhere handy
                
                move.v  d:%Yw v:lemon_strwel
                push.r  s:%Yw
                call.s  a:lemon_puts
                pops.r  d:%Yw                                       ; Print welcome message
                
:lemon_ihdl     move.v  d:REG_INDXPTR v:DAT_INPBASE                 ; Reset index pointer
                move.v  d:REG_RNPTCNT v:#h00                        ; Reset index counter
                
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Drop down a line
                
                move.v  d:%Yw v:CHR_PROMPT                       
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Print prompt
                
:.getloop       call.s  a:lemon_getc                                ; Get character
                
                cmpr.v  a:%Zz v:CHR_BACK                            ; Is character a backspace?
                brch.a  c:%NEQ a:.notback                           ; If not, loop down a few
                cmpr.v  a:REG_INDXPTR v:DAT_INPBASE                 ; Is the index pointer zero?
                brch.a  c:%NEQ a:.indxgood                          ; If not, loop down a few
                brch.a  a:.getloop                                  ; Just abort
:.indxgood      subr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h02          ; Back up the index pointer two (for reasons)
                subr.v  d:REG_RNPTCNT a:REG_RNPTCNT v:#h01          ; Back up the index counter
                load.o  d:%Zz r:REG_INDXPTR                     
                push.r  s:%Zz
                call.s  a:lemon_putc
                pops.r  d:%Zz                                       ; Print character *before* index pointer
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Revert to the real index pointer
                move.v  d:%Zz v:#h00    
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store zero at index pointer
                brch.a  a:.getloop                                  ; Loop to top
                
:.notback       cmpr.v  a:%Zz v:CHR_ENTER                           ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                          ; If not, loop down a few
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store enter in buffer
                brch.a  a:lemon_intp                                ; Jump to interpreter

:.notenter      test.v  a:REG_RNPTCNT v:#h80 s:#h01             
                brch.a  c:%NEQ a:.getloop                           ; If index pointer is full, loop to top
                
                push.r  s:%Zz
                call.s  a:lemon_putc                        
                pops.r  d:%Zz                                       ; Print character
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store character at index pointer
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                addr.v  d:REG_RNPTCNT a:REG_RNPTCNT v:#h01          ; Increment index counter
                brch.a  a:.getloop                                  ; Jump to top
                
; ---------

!zone   lemon_intp
                
:lemon_intp     move.v  d:REG_INDXPTR v:DAT_INPBASE                 ; Reset index pointer
                move.v  d:REG_CURMODE v:#h00                        ; Reset mode
                
:.mainloop      load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get character at index pointer
                cmpr.v  a:REG_CHARBUF v:CHR_ENTER                   ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                          ; If not, loop down a few
                cmpr.v  a:REG_CURMODE v:CHR_WRITE       
                brch.a  c:%NEQ a:.writeclean                    
                pops.r  d:%Yw                                       ; If the mode was Write, pop CURADDR
:.writeclean    brch.a  a:lemon_ihdl                                ; Jump to input handler
                
:.notenter      cmpr.v  a:REG_CHARBUF v:CHR_RUN                     ; Is character an 'R'?
                brch.a  c:%NEQ a:.notrun                            ; If not, loop down a few
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Drop down a line
                brch.o  r:REG_CURADDR l:%SVSK                       ; Call routine at current address
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                brch.a  a:.mainloop                                 ; Jump to top
                
:.notrun        cmpr.v  a:REG_CHARBUF v:CHR_WRITE                   ; Is character a ':'?
                brch.a  c:%NEQ a:.notwrite                          ; If not, loop down a few
                move.v  d:REG_CURMODE v:CHR_WRITE                   ; Set mode to Write
                push.r  s:REG_CURADDR                               ; Push CURADDR (indent)
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                brch.a  a:.mainloop                                 ; Jump to top
                
:.notwrite      cmpr.v  a:REG_CHARBUF v:CHR_BLOCK                   ; Is character a '.'?
                brch.a  c:%NEQ a:.notblock                          ; If not, loop down a few
                cmpr.v  a:REG_CURMODE v:CHR_WRITE       
                brch.a  c:%NEQ a:.wasntwrite                    
                pops.r  d:%Yw                                       ; If the mode was Write, pop CURADDR
:.wasntwrite    move.v  d:REG_CURMODE v:CHR_BLOCK                   ; Set mode to Block
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                brch.a  a:.mainloop                                 ; Jump to top
                
:.notblock      cmpr.v  a:REG_CHARBUF v:#h20                        ; Is character a ' '?
                brch.a  c:%NEQ a:.notempty                          ; If not, loop down a few
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                brch.a  a:.mainloop                                 ; Jump to top
                
:.notempty      move.v  d:REG_CURDATA v:#h00                        ; Clear current data

:.dataloop      load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get character at index pointer

                subr.v  d:REG_CHARBUF a:REG_CHARBUF v:#h30      
                cmpr.v  a:REG_CHARBUF v:#h0A
                brch.a  c:%LOW a:.goodnum
                subr.v  d:REG_CHARBUF a:REG_CHARBUF v:#h07 
                cmpr.v  a:REG_CHARBUF v:#h0A
                brch.a  c:%LOW a:.badnum               
                cmpr.v  a:REG_CHARBUF v:#h10
                brch.a  c:%LOW a:.goodnum               
                brch.a  a:.badnum                                   ; Convert character to hex digit
                
:.goodnum       arsl.v  d:REG_CURDATA a:REG_CURDATA v:#h04
                orbt.r  d:REG_CURDATA a:REG_CURDATA b:REG_CHARBUF   ; Add to CURDATA
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                brch.a  a:.dataloop                                 ; Find more hex characters
                
:.badnum        load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get character at index pointer
                
                cmpr.v  a:REG_CURMODE v:CHR_WRITE                   ; Is mode currently Write?
                brch.a  c:%NEQ a:.aintwrite                         ; If not, loop down a few
                stor.o  s:REG_CURDATA r:REG_CURADDR                 ; Store data at CURADDR
                addr.v  d:REG_CURADDR a:REG_CURADDR v:#h01          ; Increment CURADDR
                brch.a  a:.mainloop                                 ; Jump to top of interpreter
                
:.aintwrite     push.r  s:REG_CURADDR                               ; Push CURADDR
                move.r  d:REG_CURADDR s:REG_CURDATA                 ; Write data to CURADDR
                
                cmpr.v  a:REG_CHARBUF v:CHR_BLOCK                   ; Is character a '.'?
                brch.a  c:%NEQ a:.aintnblock                        ; If not, loop down a few    
                pops.r  d:%Yw                                       ; Empty last push
                brch.a  a:.mainloop                                 ; Jump to top of interpreter
                        
:.aintnblock    cmpr.v  a:REG_CURMODE v:#h00                        ; Is mode currently Single?
                brch.a  c:%NEQ a:.aintsingle                        ; If not, loop down a few    
                pops.r  d:%Yw                                       ; Empty last push
                
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Drop down a line
                
                push.r  s:REG_CURADDR
                call.s  a:str_hnum
                pops.r  d:REG_CURADDR
                
                move.v  d:%Yw v:#h3A          
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw         
                    
                ;move.v  d:%Yw v:#h20              
                ;push.r  s:%Yw
                ;call.s  a:lemon_putc
                ;pops.r  d:%Yw         
                
                load.o  d:%Yw r:REG_CURADDR
                push.r  s:%Yw
                call.s  a:lemon_putn
                pops.r  d:%Yw                                       ; Print address, data
                
                brch.a  a:.mainloop                                 ; Jump to top of interpreter
                        
:.aintsingle    cmpr.v  a:REG_CURMODE v:CHR_BLOCK                   ; Is mode currently Block?
                call.s  c:%NEQ a:lemon_eror                         ; If not, CRASH  
                move.r  d:%Yw s:REG_CURADDR                         ; Shuffle the address  
                pops.r  d:REG_CURADDR                               ; Pop last address
                
                cmpr.r  a:%Yw b:REG_CURADDR                         ; Is the last bigger than the first?
                brch.a  c:%GET a:.rightsize                         ; If so, loop down a few
                move.r  d:%Yw s:REG_CURADDR                         ; Bogus data plz
:.rightsize     subr.r  d:REG_TLENGTH a:%Yw b:REG_CURADDR           
                addr.v  d:REG_TLENGTH a:REG_TLENGTH v:#h01          ; Calculate length of run
                push.r  s:REG_CURADDR                               ; Save original starting address
                
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putcv
                pops.r  d:%Yw       
                
:.blkdrop       move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putcs
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Drop down a line
                
:.blkaddr       push.r  s:REG_CURADDR
                call.s  a:str_hnum
                pops.r  d:REG_CURADDR
                
                move.v  d:%Yw v:#h3A              
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                       ; Print a nice, fancy formatted address 
                
:.blkdata       cmpr.v  a:REG_TLENGTH v:#h08                        ; Do we have fewer than eight words to print?
                brch.a  c:%HOS a:.bigdata                           ; If not, loop down a few
                move.r  d:REG_ACROSSL s:REG_TLENGTH                 ; Isolate the length
                brch.a  a:.datares                                  ; Converge
:.bigdata       move.v  d:REG_ACROSSL v:#h08                        ; We know it's eight words long here
:.datares       subr.r  d:REG_TLENGTH a:REG_TLENGTH b:REG_ACROSSL   ; Update total length
                brch.a  a:.blkfent                                  ; Skip the first space so we fit into 80 characters
                
:.blkloop       move.v  d:%Yw v:#h20              
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw         
                
:.blkfent       load.o  d:%Yw r:REG_CURADDR
                push.r  s:%Yw
                call.s  a:lemon_putn
                pops.r  d:%Yw                                       ; Print a data word
                
                addr.v  d:REG_CURADDR a:REG_CURADDR v:#h01          ; Increment address
                subr.v  d:REG_ACROSSL a:REG_ACROSSL v:#h01          ; Decrement across counter
                cmpr.v  a:REG_ACROSSL v:#h00                        ; Did we finish?
                brch.a  c:%NEQ a:.blkloop                           ; If not, (rinse lather) repeat
                
                cmpr.v  a:REG_TLENGTH v:#h00                        ; Did we finish everything?
                brch.a  c:%NEQ a:.blkdrop                           ; If not, try again
                
                pops.r  d:REG_CURADDR                               ; Restore address
                move.v  d:REG_CURMODE v:#h00                        ; Set mode back to Single
                brch.a  a:.mainloop                                 ; Jump to top of interpreter
                        
