; epRISC development platform - BIOS string and text routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines deal with printing strings, numbers, and other text to the user. Relies on UART-style character printing.

!zone   str_hnum  
!def    REG_INPT    %Zw
!def    REG_WORK    %Zx
!def    REG_CONT    %Zy

:str_hnum       push.r  s:REG_INPT
                push.r  s:REG_WORK
                push.r  s:REG_CONT
                subr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                pops.r  d:REG_INPT                                  ; Get the number we're supposed to print
                move.v  d:REG_CONT v:#h08
                addr.v  d:%SP a:%SP v:#h05                          ; Set up the stack
                
:.ploop         andb.v  d:REG_WORK a:REG_INPT v:#hF0 s:#h0C         
                arsl.v  d:REG_INPT a:REG_INPT v:#h04
                losr.v  d:REG_WORK a:REG_WORK v:#h1C                ; Grab a nybble
                
                addr.v  d:REG_WORK a:REG_WORK v:#h30                ; Make it an ASCII number
                cmpr.v  a:REG_WORK v:#h3A   
                brch.a  c:%LOW a:.prest                             ; Hex needs a little more
                addr.v  d:REG_WORK a:REG_WORK v:#h07
:.prest         push.r  s:REG_WORK
                call.s  a:ser_send
                ;call.s  a:vga_putc
                pops.r  d:REG_WORK                                  ; Print it
                
                subr.v  d:REG_CONT a:REG_CONT v:#h01
                cmpr.v  a:REG_CONT v:#h00
                brch.a  c:%NEQ a:.ploop                             ; Repeat
                
                pops.r  d:REG_CONT
                pops.r  d:REG_WORK
                pops.r  d:REG_INPT
                rtrn.s                                              ; And return
                

!zone   str_lnum  
!def    REG_INPT    %Zw
!def    REG_CONT    %Zx
!def    REG_WORK    %Zy

:str_lnum       push.r  s:REG_INPT
                push.r  s:REG_CONT
                push.r  s:REG_WORK
                subr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                pops.r  d:REG_CONT                                  ; Get the number we're supposed to print
                pops.r  d:REG_INPT
                addr.v  d:%SP a:%SP v:#h06                          ; Set up the stack
                
                push.r  s:REG_CONT
                push.r  s:REG_INPT
                move.v  d:REG_INPT v:#h08
                subr.r  d:REG_CONT a:REG_INPT b:REG_CONT
                arsl.v  d:REG_CONT a:REG_CONT v:#h02
                pops.r  d:REG_INPT
                arsl.r  d:REG_INPT a:REG_INPT b:REG_CONT
                pops.r  d:REG_CONT                                  ; Preshift for length selection
                
:.ploop         andb.v  d:REG_WORK a:REG_INPT v:#hF0 s:#h0C         
                arsl.v  d:REG_INPT a:REG_INPT v:#h04
                losr.v  d:REG_WORK a:REG_WORK v:#h1C                ; Grab a nybble
                
                addr.v  d:REG_WORK a:REG_WORK v:#h30                ; Make it an ASCII number
                cmpr.v  a:REG_WORK v:#h3A   
                brch.a  c:%LOW a:.prest                             ; Hex needs a little more
                addr.v  d:REG_WORK a:REG_WORK v:#h07
:.prest         push.r  s:REG_WORK
                call.s  a:ser_send
                ;call.s  a:vga_putc
                pops.r  d:REG_WORK                                  ; Print it
                
                subr.v  d:REG_CONT a:REG_CONT v:#h01
                cmpr.v  a:REG_CONT v:#h00
                brch.a  c:%NEQ a:.ploop                             ; Repeat
                
                pops.r  d:REG_WORK
                pops.r  d:REG_CONT
                pops.r  d:REG_INPT
                rtrn.s                                              ; And return
                
                
!zone   str_getc
!def    REG_SADR    %Zw
!def    REG_WORD    %Zx
!def    REG_ICHR    %Zy
!def    REG_RTRN    %Zz

:str_getc       push.r  s:REG_SADR
                push.r  s:REG_WORD
                push.r  s:REG_ICHR
                subr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                pops.r  d:REG_WORD                                  ; Get the index
                pops.r  d:REG_SADR                                  ; Get the string address
                addr.v  d:%SP a:%SP v:#h06                          ; Set up the stack
                
                move.r  d:REG_ICHR s:REG_WORD                       ; Copy index to ichr
                arsr.v  d:REG_WORD a:REG_WORD v:#h02                ; Divide index in word by 4
                addr.r  d:REG_SADR a:REG_SADR b:REG_WORD
                load.o  d:REG_RTRN r:REG_SADR                       ; Load correct word into rtrn
                move.v  d:REG_WORD v:#h03                           ; Move 3 into word
                andb.v  d:REG_ICHR a:REG_ICHR v:#h03                ; Mask off upper 30 of ichr
                subr.r  d:REG_ICHR a:REG_WORD b:REG_ICHR            ; Subtract ichr from word into ichr
                arsl.v  d:REG_ICHR a:REG_ICHR v:#h03                ; Multiply ichr by 8
                masr.r  d:REG_RTRN a:REG_RTRN b:REG_ICHR v:#hFF     ; Mask and shift right rtrn by ichr
                
                pops.r  d:REG_ICHR
                pops.r  d:REG_WORD
                pops.r  d:REG_SADR
                rtrn.s                                              ; And return
                

!zone   str_puts
!def    REG_SADR    %Zw
!def    REG_CONT    %Zx
!def    REG_RTRN    %Zz

:str_puts       push.r  s:REG_SADR
                push.r  s:REG_CONT
                subr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                move.v  d:REG_CONT v:#h00
                pops.r  d:REG_SADR                                  ; Get the string address
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
               
                push.r  s:REG_SADR                                  ; Get the address on the stack
                
:.strloop       push.r  s:REG_CONT
                call.s  a:str_getc                                  
                pops.r  d:REG_CONT                                  ; Get a character
                
                cmpr.v  a:%Zz v:#h00                                ; Is it zero?
                brch.a  c:%EQL a:.strend                            ; If so, exit
                
                push.r  s:%Zz
                call.s  a:ser_send
                ;call.s  a:vga_putc
                pops.r  d:%Zz                                       ; Print it
                
                addr.v  d:REG_CONT a:REG_CONT v:#h01                ; Increment counter
                brch.a  a:.strloop                                  ; Jump to top of loop
                
:.strend        pops.r  d:REG_SADR
                pops.r  d:REG_CONT
                pops.r  d:REG_SADR
                rtrn.s                                              ; And return
                

!zone   str_putsl
!def    REG_SADR    %Zw
!def    REG_ENDA    %Zx
!def    REG_CONT    %Zy
!def    REG_RTRN    %Zz

:str_putsl      push.r  s:REG_SADR
                push.r  s:REG_ENDA   
                push.r  s:REG_CONT
                subr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                move.v  d:REG_CONT v:#h00
                pops.r  d:REG_ENDA                                  ; Get the string length
                pops.r  d:REG_SADR                                  ; Get the string address
                addr.v  d:%SP a:%SP v:#h06                          ; Set up the stack
               
                push.r  s:REG_SADR                                  ; Get the address on the stack
                
:.strloop       push.r  s:REG_CONT
                call.s  a:str_getc                                  
                pops.r  d:REG_CONT                                  ; Get a character
                
                cmpr.v  a:%Zz v:#h00                                ; Is it zero?
                brch.a  c:%EQL a:.strend                            ; If so, exit
                
                push.r  s:%Zz
                call.s  a:ser_send
                ;call.s  a:vga_putc
                pops.r  d:%Zz                                       ; Print it
                
                addr.v  d:REG_CONT a:REG_CONT v:#h01                ; Increment counter
                subr.v  d:REG_ENDA a:REG_ENDA v:#h01                ; Increment counter
                cmpr.v  a:REG_ENDA v:#h00                           ; Are we done?
                brch.a  c:%NEQ a:.strloop                           ; If so, jump to top of loop
                
:.strend        pops.r  d:REG_SADR
                pops.r  d:REG_CONT
                pops.r  d:REG_ENDA
                pops.r  d:REG_SADR
                rtrn.s                                              ; And return
                

