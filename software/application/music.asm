; epRISC development platform - Melody player
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Simple program that shows the hex value of any character you type.

!ip     h00004000
!def    BUS_BASE_ADDRESS    h2000
!def    REG_PWRK            %Xw
!def    REG_RESP            %Zz

:ioc_send       push.r  s:REG_ADDR
                push.r  s:REG_DATA
                push.r  s:REG_BASE
                subr.v  d:%SP a:%SP v:#h04
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS
                pops.r  d:REG_DATA
                pops.r  d:REG_ADDR                                  
                addr.v  d:%SP a:%SP v:#h06                          ; Set up the stack
                
                move.v  d:REG_RESP v:#h8 s:#h06
                orbt.r  d:REG_RESP a:REG_RESP b:REG_ADDR
                arsl.v  d:REG_RESP a:REG_RESP v:#h10                ; Form write packet at address
                orbt.r  d:REG_RESP a:REG_RESP b:REG_DATA            ; Add data
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.wloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete
                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
                
                pops.r  d:REG_BASE
                pops.r  d:REG_DATA
                pops.r  d:REG_ADDR                                  ; Restore registers
                rtrn.s                                              ; Return from stack
                
                
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_video.asm"
!include    "../../rom/bios_debug.asm"
