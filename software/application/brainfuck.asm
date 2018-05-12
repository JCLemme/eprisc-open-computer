; epRISC development platform - Brainfuck interpreter
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Simple brainfuck interpreter, based off the Lemon input handler code.

!ip     h00004000
!def    BUS_BASE_ADDRESS    h2000


brch.a  a:bf_entr
            
            
!zone   bf_defs

!def    REG_INDXPTR     %Xw     ; Pointer to input buffer
!def    REG_DATAPTR     %Xx     ; Current cell
!def    REG_DATABUF     %Xy     ; Data at current cell

!def    REG_RNPTCNT     %Yx     ; Temp - number of characters entered
!def    REG_CHARBUF     %Yx     ; Temp - character at location
!def    REG_COMPARE     %Yy     ; Temp - used for big comparisons

!def    DAT_INPBASE     #h1000  ; Base address of the input buffer
!def    DAT_INPHALT     #h17FF  ; End address of the input buffer
!def    DAT_DATBASE     #h5000  ; Base address of the cell buffer

!def    CHR_BACK        #h08    ; Backspace character
!def    CHR_ENTER       #h0D    ; Enter character
!def    CHR_PROMPT      #h3E    ; Prompt character

!def    CHR_INCPTR      #h3E    ; >
!def    CHR_DECPTR      #h3C    ; <
!def    CHR_INCDAT      #h2B    ; +
!def    CHR_DECDAT      #h2D    ; -
!def    CHR_OUTPUT      #h2E    ; .
!def    CHR_INPUTC      #h2C    ; ,
!def    CHR_OPBRAK      #h5B    ; [
!def    CHR_CLBRAK      #h5D    ; ]
!def    CHR_GOSTOP      #h60    ; `

:bf_strwel   !str "\n\rBrainfuck v1.2\0"
:bf_strerr   !str "\n\rError interpreting code\n\r\0"

; ---------

!zone   bf_stub

:bf_putc        subr.v  d:%SP a:%SP v:#h01
                pops.r  d:%Zz
                addr.v  d:%SP a:%SP v:#h02
                push.r  s:%Zz
                
                call.s  a:ser_send
                call.s  a:vga_putc
                
                pops.r  d:%Zz
                rtrn.s
            
:bf_putcs       brch.a  a:ser_send

:bf_putcv       brch.a  a:vga_putc

:bf_getc        brch.a  a:ser_srcv

:bf_putn        brch.a  a:str_hnum

:bf_puts        brch.a  a:str_puts

; ---------

!zone   bf_ihdl

:bf_entr        move.v  d:%SP v:#h1800                              ; Put the stack somewhere handy
                
                move.v  d:%Yw v:bf_strwel
                push.r  s:%Yw
                call.s  a:bf_puts
                pops.r  d:%Yw                                       ; Print welcome message
                
:bf_ihdl        move.v  d:REG_INDXPTR v:DAT_INPBASE                 ; Reset index pointer
                move.v  d:REG_RNPTCNT v:#h00                        ; Reset index counter
                
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:bf_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:bf_putc
                pops.r  d:%Yw                                       ; Drop down a line
                
                move.v  d:%Yw v:CHR_PROMPT                       
                push.r  s:%Yw
                call.s  a:bf_putc
                pops.r  d:%Yw                                       ; Print prompt
                
:.getloop       call.s  a:bf_getc                                   ; Get character
                
                cmpr.v  a:%Zz v:CHR_BACK                            ; Is character a backspace?
                brch.a  c:%NEQ a:.notback                           ; If not, loop down a few
                cmpr.v  a:REG_INDXPTR v:DAT_INPBASE                 ; Is the index pointer zero?
                brch.a  c:%NEQ a:.indxgood                          ; If not, loop down a few
                brch.a  a:.getloop                                  ; Just abort
:.indxgood      subr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h02          ; Back up the index pointer two (for reasons)
                subr.v  d:REG_RNPTCNT a:REG_RNPTCNT v:#h01          ; Back up the index counter
                load.o  d:%Zz r:REG_INDXPTR                     
                push.r  s:%Zz
                call.s  a:bf_putc
                pops.r  d:%Zz                                       ; Print character *before* index pointer
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Revert to the real index pointer
                move.v  d:%Zz v:#h00    
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store zero at index pointer
                brch.a  a:.getloop                                  ; Loop to top
                
:.notback       cmpr.v  a:%Zz v:CHR_ENTER                           ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                          ; If not, loop down a few
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store enter in buffer
                brch.a  a:bf_intp                                   ; Jump to interpreter

:.notenter      test.v  a:REG_RNPTCNT v:#h80 s:#h01             
                brch.a  c:%NEQ a:.getloop                           ; If index pointer is full, loop to top
                
                push.r  s:%Zz
                call.s  a:bf_putc                        
                pops.r  d:%Zz                                       ; Print character
                stor.o  s:%Zz r:REG_INDXPTR                         ; Store character at index pointer
                addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Increment index pointer
                addr.v  d:REG_RNPTCNT a:REG_RNPTCNT v:#h01          ; Increment index counter
                brch.a  a:.getloop                                  ; Jump to top
                
; ---------

!zone   bf_intp
                
:bf_intp        move.v  d:REG_INDXPTR v:DAT_INPBASE                 ; Reset index pointer
                move.v  d:REG_DATAPTR v:DAT_DATBASE                 ; Reset cell pointer
                move.v  d:REG_DATABUF v:#h00
                move.v  d:%Yw v:#h50                                ; Clear loop counter
                move.v  d:%Yy v:#h00                                ; Clear loop data
                
:.clrloop       stor.o  r:REG_DATAPTR s:%Yy
                addr.v  d:REG_DATAPTR a:REG_DATAPTR v:#h01
                subr.v  d:%Yw a:%Yw v:#h01
                cmpr.v  a:%Yw v:#h00
                brch.a  c:%NEQ a:.clrloop
                
                move.v  d:REG_DATAPTR v:DAT_DATBASE                 ; Reset cell pointer
                
                move.v  d:%Yw v:#h0A                  
                push.r  s:%Yw
                call.s  a:bf_putc
                pops.r  d:%Yw                                   
                move.v  d:%Yw v:#h0D                  
                push.r  s:%Yw
                call.s  a:bf_putc
                pops.r  d:%Yw                                       ; Drop down a line
                
:.mainloop      load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get character at index pointer
                cmpr.v  a:REG_CHARBUF v:CHR_ENTER                   ; Is character an enter?
                brch.a  c:%NEQ a:.notenter                          ; If not, loop down a few
                brch.a  a:bf_ihdl                                   ; Go back to edit mode
                
:.notenter      cmpr.v  a:REG_CHARBUF v:CHR_INCPTR                  ; Is character an ">"?
                brch.a  c:%NEQ a:.notincptr                         ; If not, loop down a few
                stor.o  r:REG_DATAPTR s:REG_DATABUF
                addr.v  d:REG_DATAPTR a:REG_DATAPTR v:#h01
                load.o  r:REG_DATAPTR d:REG_DATABUF                 ; Move forwards in the cell array
                brch.a  a:.retloop                                  ; Keep going
                
:.notincptr     cmpr.v  a:REG_CHARBUF v:CHR_DECPTR                  ; Is character an "<"?
                brch.a  c:%NEQ a:.notdecptr                         ; If not, loop down a few
                stor.o  r:REG_DATAPTR s:REG_DATABUF
                subr.v  d:REG_DATAPTR a:REG_DATAPTR v:#h01
                load.o  r:REG_DATAPTR d:REG_DATABUF                 ; Move backwards in the cell array
                brch.a  a:.retloop                                  ; Keep going
                
:.notdecptr     cmpr.v  a:REG_CHARBUF v:CHR_INCDAT                  ; Is character an "+"?
                brch.a  c:%NEQ a:.notincdat                         ; If not, loop down a few
                addr.v  d:REG_DATABUF a:REG_DATABUF v:#h01          ; Increment data in current cell
                brch.a  a:.retloop                                  ; Keep going
                
:.notincdat     cmpr.v  a:REG_CHARBUF v:CHR_DECDAT                  ; Is character an "-"?
                brch.a  c:%NEQ a:.notdecdat                         ; If not, loop down a few
                subr.v  d:REG_DATABUF a:REG_DATABUF v:#h01          ; Decrement data in current cell
                brch.a  a:.retloop                                  ; Keep going
                
:.notdecdat     cmpr.v  a:REG_CHARBUF v:CHR_OUTPUT                  ; Is character an "."?
                brch.a  c:%NEQ a:.notoutput                         ; If not, loop down a few
                push.r  s:REG_DATABUF
                call.s  a:bf_putc
                pops.r  d:REG_DATABUF                               ; Write cell to the output device
                brch.a  a:.retloop                                  ; Keep going
                
:.notoutput     cmpr.v  a:REG_CHARBUF v:CHR_INPUTC                  ; Is character an ","?
                brch.a  c:%NEQ a:.notinputc                         ; If not, loop down a few
                call.s  a:bf_getc
                move.r  d:REG_DATABUF s:%Zz                         ; Get a character and store it into the current cell
                cmpr.v  a:REG_DATABUF v:CHR_GOSTOP                  ; Do we want to exit?
                brch.a  c:%EQL a:bf_ihdl                            ; If so, loop back to top
                brch.a  a:.retloop                                  ; Keep going
                
:.notinputc     cmpr.v  a:REG_CHARBUF v:CHR_OPBRAK                  ; Is character an "["?
                brch.a  c:%NEQ a:.notopbrak                         ; If not, loop down a few
                cmpr.v  a:REG_DATABUF v:#h00                        ; Is the current cell zero?
                brch.a  c:%NEQ a:.retloop                           ; If not, just keep going
                
                move.v  d:%Yw v:#h00                                ; We're on loop level 0
                move.v  d:REG_COMPARE v:DAT_INPHALT                 ; Checking for end of loop
   
:.fwdloop       addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Jump forward a command
                load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get command at index pointer
                cmpr.v  a:REG_CHARBUF v:CHR_OPBRAK                  ; Is it another "["?
                brch.a  c:%NEQ a:.fwdnotop                          ; If not, jump forward some
                addr.v  d:%Yw a:%Yw v:#h01                          ; Increment a level
                brch.a  a:.fwdcommon                                ; Converge
                
:.fwdnotop      cmpr.v  a:REG_CHARBUF v:CHR_CLBRAK                  ; Is it another "]"?
                brch.a  c:%NEQ a:.fwdcommon                         ; If not, jump forward some
                cmpr.v  a:%Yw v:#h00                                ; Are we on the starting level?
                brch.a  c:%EQL a:.fwdexit                           ; If so, get outta here
                subr.v  d:%Yw a:%Yw v:#h01                          ; Else, go down a level
                
:.fwdcommon     cmpr.r  a:REG_INDXPTR b:REG_COMPARE                 ; Are we out of commands?
                brch.a  c:%EQL a:.error                             ; If so, CRASH
                brch.a  a:.fwdloop                                  ; Else, go back to top
                
:.fwdexit       brch.a  a:.retloop                                  ; Keep going

:.notopbrak     cmpr.v  a:REG_CHARBUF v:CHR_CLBRAK                  ; Is character an "]"?
                brch.a  c:%NEQ a:.notclbrak                         ; If not, loop down a few
                cmpr.v  a:REG_DATABUF v:#h00                        ; Is the current cell zero?
                brch.a  c:%EQL a:.retloop                           ; If so, just keep going
                
                move.v  d:%Yw v:#h00                                ; We're on loop level 0
                move.v  d:REG_COMPARE v:DAT_INPBASE                 ; Checking for end of loop
   
:.bakloop       subr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01          ; Jump forward a command
                load.o  d:REG_CHARBUF r:REG_INDXPTR                 ; Get command at index pointer
                cmpr.v  a:REG_CHARBUF v:CHR_CLBRAK                  ; Is it another "]"?
                brch.a  c:%NEQ a:.baknotcl                          ; If not, jump forward some
                addr.v  d:%Yw a:%Yw v:#h01                          ; Increment a level
                brch.a  a:.bakcommon                                ; Converge
                
:.baknotcl      cmpr.v  a:REG_CHARBUF v:CHR_OPBRAK                  ; Is it another "["?
                brch.a  c:%NEQ a:.bakcommon                         ; If not, jump forward some
                cmpr.v  a:%Yw v:#h00                                ; Are we on the starting level?
                brch.a  c:%EQL a:.bakexit                           ; If so, get outta here
                subr.v  d:%Yw a:%Yw v:#h01                          ; Else, go down a level
                
:.bakcommon     cmpr.r  a:REG_INDXPTR b:REG_COMPARE                 ; Are we out of commands?
                brch.a  c:%EQL a:.error                             ; If so, CRASH
                brch.a  a:.bakloop                                  ; Else, go back to top
                
:.bakexit       brch.a  a:.retloop                                  ; Keep going

:.notclbrak     cmpr.v  a:REG_CHARBUF v:CHR_GOSTOP                  ; Is character an "`"?
                brch.a  c:%NEQ a:.notgostop                         ; If not, loop down a few
                brch.a  a:bf_ihdl                                   ; Jump back to the top
                    
:.notgostop     brch.a  a:.error                                    ; If we don't recognize it, go back to the top

:.error         move.v  d:%Yw v:bf_strerr
                push.r  s:%Yw
                call.s  a:bf_puts
                pops.r  d:%Yw                                       ; Print error message
                brch.a  a:bf_ihdl                                   ; Jump back to the top
                
:.retloop       addr.v  d:REG_INDXPTR a:REG_INDXPTR v:#h01
                brch.a  a:.mainloop                                 ; Keep it coming
                        
                                                                                                                                          
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_video.asm"
