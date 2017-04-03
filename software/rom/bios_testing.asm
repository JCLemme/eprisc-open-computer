; epRISC development platform - BIOS testing scratchpad
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Just a scratchpad to test components of the BIOS before integration.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h200

:entry          move.v  d:%SP v:#h110
                call.s  a:ioc_init
                move.v  d:%Xw v:#h34EA
                
:.loop          push.r  s:%Xw
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
                
                addr.v  d:%Xw a:%Xw v:#h01 
                brch.a  a:.loop
                
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
