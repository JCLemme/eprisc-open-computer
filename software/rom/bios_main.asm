; epRISC development platform - BIOS / bootloader
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Bootloader for the epRISC system. Loads executables from an SD card, or launches the monitor.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h2000

:entry      move.v  d:%SP v:#h1100
            call.s  a:ioc_init
            
            move.v  d:%Xw v:bios_str.str_welcome
            push.r  s:%Xw
            call.s  a:str_puts
            pops.r  d:%Xw
            
            brch.a  a:lemon_entr
            

!zone   bios_str

:.str_welcome   !str "epRISC Bootloader v3 - starting...\n\r\0"
         
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_debug.asm"
!include    "../../rom/lemon_main.asm"
