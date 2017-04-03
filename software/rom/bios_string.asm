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
                brch.a  c:%HOS a:.prest                             ; Hex needs a little more
                addr.v  d:REG_WORK a:REG_WORK v:#h07
:.prest         push.r  s:REG_WORK
                call.s  a:ser_send
                pops.r  d:REG_WORK                                  ; Print it
                
                subr.v  d:REG_CONT a:REG_CONT v:#h01
                cmpr.v  a:REG_CONT v:#h00
                brch.a  c:%GRT a:.ploop                             ; Repeat
                
                pops.r  d:REG_CONT
                pops.r  d:REG_WORK
                pops.r  d:REG_INPT
                rtrn.s                                              ; And return
