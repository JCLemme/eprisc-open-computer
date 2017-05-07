; epRISC development platform - BIOS testing scratchpad
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Just a scratchpad to test components of the BIOS before integration.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h800

:entry          move.v  d:%SP v:#h410
                call.s  a:ioc_init
                move.v  d:%Xw v:#h34EA
                
                move.v  d:%Xw v:#h201
                push.r  s:%Xw 
                move.v  d:%Xw v:#hEA
                push.r  s:%Xw
                call.s  a:ioc_send
                pops.r  d:%Xw
                pops.r  d:%Xw

                move.v  d:%Xw v:#h200
                push.r  s:%Xw 
                move.v  d:%Xw v:#h80
                push.r  s:%Xw
                call.s  a:ioc_send
                pops.r  d:%Xw
                pops.r  d:%Xw

                halt.i
                
:chrls          call.s  a:ser_srcv
                
                push.r  s:%Zz
                call.s  a:ser_send
                
                move.v  d:%Xw v:#h3A
                push.r  s:%Xw
                call.s  a:ser_send
                pops.r  d:%Xw
                
                move.v  d:%Xw v:#h20
                push.r  s:%Xw
                call.s  a:ser_send
                pops.r  d:%Xw
                
                call.s  a:str_hnum
                pops.r  d:%Zz
                
                move.v  d:%Xx v:#h0A
                push.r  s:%Xx
                call.s  a:ser_send
                pops.r  d:%Zz
                
                move.v  d:%Xx v:#h0D
                push.r  s:%Xx
                call.s  a:ser_send
                pops.r  d:%Zz
                
                brch.a  a:chrls
                
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
