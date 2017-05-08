; epRISC development platform - BIOS / bootloader
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Bootloader for the epRISC system. Loads executables from an SD card, or launches the monitor.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h2000

:entry      move.v  d:%SP v:#h1100

            move.v  d:%Xw v:str_welcome
            push.r  s:%Xw
            call.s  a:putstr
            pops.r  d:%Xw
            
            brch.a  a:lemon_entr
            
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/lemon_main.asm"
