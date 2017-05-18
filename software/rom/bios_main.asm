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
            
            move.v  d:%GL v:#h00
            
            move.v  d:%Xw v:#hEA
            push.r  s:%Xw 
            call.s  a:spi_send
            pops.r  d:%Xw
            
            move.v  d:%Xw v:bios_str.str_welcome
            push.r  s:%Xw
            call.s  a:str_puts
            pops.r  d:%Xw
            
            brch.a  a:lemon_entr
            

:mon_send   load.r  d:%Zz r:%GL o:#h1FF0
            push.r  s:%Zz 
            call.s  a:spi_send
            stor.r  s:%Zz r:%GL o:#h1FF1
            pops.r  d:%Zz
            rtrn.s
            
:mon_recv   call.s  a:spi_recv
            stor.r  s:%Zz r:%GL o:#h1FF1
            rtrn.s
            
:mon_scmd   load.r  d:%Zz r:%GL o:#h1FF2
            push.r  s:%Zz 
            load.r  d:%Zz r:%GL o:#h1FF3
            push.r  s:%Zz 
            call.s  a:sdc_scmd
            stor.r  s:%Zz r:%GL o:#h1FF4
            pops.r  d:%Zz
            pops.r  d:%Zz
            rtrn.s

:mon_init   call.s  a:sdc_init
            stor.r  s:%Zz r:%GL o:#h1FF5
            rtrn.s


!zone   bios_str

:.str_welcome   !str "epRISC Bootloader v3 - starting...\n\r\0"
         
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_spi.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_sdcard.asm"
!include    "../../rom/bios_debug.asm"
!include    "../../rom/lemon_main.asm"
