; epRISC development platform - Lemon Monitor
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Basic machine-code monitor. Inspired by Steve Wozniack's Wozmon.


!def    REG_CURADDR     %       ; Address stored by user
!def    REG_CURDATA     %       ; Data buffer while interpreting input
!def    REG_INDXPTR     %       ; Pointer to input buffer
!def    REG_INPMODE     %       ; Current mode of the interpreter

!def    REG_INPTCNT     %Yx     ; Temp - number of characters entered
!def    REG_CHARBUF     %Yx     ; Temp - character at location

!def    DAT_BUSBASE             ; Base address of the bus controller
!def    DAT_INPBASE             : Base address of the input buffer
!def    DAT_INPTMAX             ; Size of input buffer

!def    CHR_BACK                ; Backspace character
!def    CHR_ENTER               ; Enter character
!def    CHR_PROMPT              ; Prompt character
!def    CHR_RUN                 ; Run mode character
!def    CHR_BLOCK               ; Block mode character
!def    CHR_WRITE               ; Write mode character

; ---------

!zone   lemon_stub

:lemon_putc     brch.a  a:ser_send

:lemon_getc     brch.a  a:ser_srcv

; ---------

!zone   lemon_ihdl

:lemon_entr     move.v  d:%SP v:#h17FF                          ; Put the stack somewhere handy
                
:lemon_ihdl     move.v  d:REG_INDXPTR v:DAT_INPBASE             ; Reset index pointer
                move.v  d:REG_INPTCNT v:#h00                    ; Reset index counter
                
                move.v  d:%Yw v:CHR_PROMPT                       
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   ; Print prompt
                
:.getloop       call.s  a:lemon_getc                            ; Get character
                
                cmpr.v  a:%Zz v:CHR_BACK                        ; Is character a backspace?
                brch.a  c:%NEQ a:.notback                       ; If not, loop down a few
                subr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01      ; Back up the index pointer
                subr.v  d:REG_INPTCNT a:REG_INPTCNT v:#h01      ; Back up the index counter
                load.a  d:%Zz a:REG_INDXPTR                     
                push.r  s:%Zz
                call.s  a:lemon_putc
                pops.r  d:%Zz                                   ; Print character at index pointer
                brch.a  a:.getloop                              ; Loop to top
                
:.notback       cmpr.v  a:%Zz v:CHR_ENTER                       ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                      ; If not, loop down a few
                stor.a  s:%Zz a:REG_INDXPTR                     ; Store enter in buffer
                brch.a  a:lemon_intp                            ; Jump to interpreter

:.notente       test.v  a:REG_INPTCNT v:#h80 s:#h01             
                brch.a  c:%EQL a:.getloop                       ; If index pointer is full, loop to top
                
                push.r  s:%Zz
                call.s  a:lemon_putc                        
                pops.r  d:%Zz                                   ; Print character
                stor.a  s:%Zz a:REG_INDXPTR                     ; Store character at index pointer
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01      ; Increment index pointer
                addr.v  d:REG_INPTCNT a:REG_INPTCNT v:#h01      ; Increment index counter
                brch.a  a:.getloop                              ; Jump to top
                
; ---------

!zone   lemon_intp
                
:lemon_intp     move.v  d:REG_INDXPTR v:DAT_INPBASE             ; Reset index pointer

                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:lemon_putc
                pops.r  d:%Yw                                   ; Drop down a line
                
:.mainloop      load.a  d:REG_CHARBUF a:REG_INDXPTR             ; Get character at index pointer
                cmpr.v  a:REG_CHARBUF v:CHR_ENTER               ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                      ; If not, loop down a few
                cmpr.v  a:REG_CURMODE v:CHR_WRITE       
                brch.a  c:%NEQ a:.writeclean                    
                pops.r  d:%Yw                                   ; If the mode was Write, pop CURADDR
:.writeclean    brch.a  a:lemon_ihdl                            : Jump to input handler
                
:.notenter      cmpr.v  a:REG_CHARBUF v:CHR_RUN                 ; Is character an 'R'?
                brch.a  c:%NEQ a:.notrun                        ; If not, loop down a few
                call.s  r:REG_CURADDR                           ; Call routine at current address
                brch.a  a:.mainloop                             ; Jump to top
                
:.notrun        cmpr.v  a:REG_CHARBUF v:CHR_WRITE               ; Is character a ':'?
                brch.a  c:%NEQ a:.notwrite                      ; If not, loop down a few
                move.v  d:REG_CURMODE v:CHR_WRITE               ; Set mode to Write
                push.r  s:%REG_CURADDR                          ; Push CURADDR
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01      ; Increment index pointer
                brch.a  a:.mainloop                             ; Jump to top
                
:.notwrite      cmpr.v  a:REG_CHARBUF v:CHR_BLOCK               ; Is character a '.'?
                brch.a  c:%NEQ a:.notblock                      ; If not, loop down a few
                cmpr.v  a:REG_CURMODE v:CHR_WRITE       
                brch.a  c:%NEQ a:.wasntwrite                    
                pops.r  d:%Yw                                   ; If the mode was Write, pop CURADDR
:.wasntwrite    move.v  d:REG_CURMODE v:CHR_BLOCK               ; Set mode to Block
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01      ; Increment index pointer
                brch.a  a:.mainloop                             ; Jump to top
                
:.notblock      cmpr.v  a:REG_CHARBUF v:#h20                    ; Is character a ' '?
                brch.a  c:%NEQ a:.notempty                      ; If not, loop down a few
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01      ; Increment index pointer
                brch.a  a:.mainloop                             ; Jump to top
                
:.notempty      move.v  d:REG_CURDATA v:#h00                    ; Clear current data

:.dataloop      load.a  d:REG_CHARBUF a:REG_INDXPTR             ; Get character at index pointer
                Convert character to hex digit
                If digit is valid
                    Add to CURDATA
                    Increment text counter
                    Jump to top of hex loop
                If mode is Write
                    Store data at CURADDR
                    Increment CURADDR
                    Jump to top of interpreter
                If mode isn't Write
                    Push CURADDR
                    Write data to CURADDR
                    If character is '.'
                        Empty last push
                        Jump to top of interpreter
                    If mode is Single
                        Empty last push
                        Print address, data
                        Jump to top of interpreter
                    If mode is Block
                        Pop from stack
                        Calculate total length
                        Print address
                        Print eight data words
                        Loop until complete
                        Jump to top of interpreter
