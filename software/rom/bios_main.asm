; epRISC development platform - BIOS / bootloader
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Bootloader for the epRISC system. Loads executables from an SD card, or launches the monitor.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h2000

!zone   bios_main

:entry          move.v  d:%SP v:#h1100                              ; Put the stack somewhere handy (on the chip RAM)
                move.v  d:%GL v:#h00                                ; So that monitor control jumps work
                
                call.s  a:ioc_init
                move.v  d:%Xw v:#h7FFF
                push.r  s:%Xw
                move.v  d:%Xw v:#h00
                push.r  s:%Xw
                call.s  a:ioc_send
                pops.r  d:%Xw
                pops.r  d:%Xw                                       ; Reset the I/O controller
                            
                move.v  d:%Xw v:bios_str.str_welcome
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Print the welcome message
                
                
                
                move.v  d:%Xw v:bios_str.str_postbgn
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Announce the beginning of the POSTs
                
                move.v  d:%Xw v:bios_str.str_postgud
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Temporary - no POSTs yet, so just say we passed and move on
                
                
                
                move.v  d:%Xw v:bios_str.str_postbgn
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Announce that we're trying to mount the first SD card
                
                call.s  a:sdc_init                                  ; Initialize the first SD card
                
                move.v  d:%Xw v:bios_str.str_mountno
                cmpr.v  a:%Zz v:#hFF                                ; Did it fail?
                brch.a  c:%EQL a:.sdcprint                          ; If so, we guessed correctly
                move.v  d:%Xw v:bios_str.str_mountok                ; Passing string
:.sdcprint      push.r  s:%Xw 
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Print the correct string
                
                
                
                move.v  d:%Xw v:bios_str.str_monitor
                push.r  s:%Xw
                call.s  a:str_puts  
                pops.r  d:%Xw                                       ; We're just going to immediately enter the monitor
                
                brch.a  a:lemon_entr
                

:mon_send       load.o  d:%Zz r:%GL o:#h1FF0
                push.r  s:%Zz 
                call.s  a:spi_send
                stor.o  s:%Zz r:%GL o:#h1FF1
                pops.r  d:%Zz
                rtrn.s
                
:mon_recv       call.s  a:spi_recv
                stor.o  s:%Zz r:%GL o:#h1FF1
                rtrn.s
                
:mon_scmd       load.o  d:%Zz r:%GL o:#h1FF2
                push.r  s:%Zz 
                load.o  d:%Zz r:%GL o:#h1FF3
                push.r  s:%Zz 
                call.s  a:sdc_scmd
                stor.o  s:%Zz r:%GL o:#h1FF4
                pops.r  d:%Zz
                pops.r  d:%Zz
                rtrn.s

:mon_init       call.s  a:sdc_init
                stor.o  s:%Zz r:%GL o:#h1FF5
                rtrn.s


!zone   bios_str

:.str_welcome   !str "epRISC Bootloader v3.2\n\rcopyright 2015-2017 Proportional Labs\n\r\n\r\0"
:.str_mountda   !str "Attempting to mount SD card in slot A...\n\r\0"
:.str_mountdb   !str "Attempting to mount SD card in slot B...\n\r\0"
:.str_mountok   !str "  SD card mounted successfully.\n\r\n\r\0"
:.str_mountno   !str "  Error mounting SD card.\n\r\n\r\0"
:.str_postbgn   !str "Starting POSTs...\n\r\0"
:.str_postmem   !str "  Memory          \0"
:.str_postser   !str "  UART            \0"
:.str_postspi   !str "  SPI             \0"
:.str_postsys   !str "  sysX Bus        \0"
:.str_postmem   !str "  I/O Controller  \0"
:.str_postokt   !str "OK\n\r\0"
:.str_postnot   !str "FAIL\n\r\0"
:.str_postgud   !str "POST successful.\n\r\0"
:.str_postfal   !str "POST unsuccessful.\n\r\0"
:.str_monitor   !str "Entering monitor...\n\r\n\r\0"

!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_spi.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_sdcard.asm"
!include    "../../rom/bios_debug.asm"
!include    "../../rom/lemon_main.asm"
