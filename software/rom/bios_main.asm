; epRISC development platform - BIOS / bootloader
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Bootloader for the epRISC system. Loads executables from an SD card, or launches the monitor.

!ip     h00000000
!def    BUS_BASE_ADDRESS    h2000
!def    BIOS_DISKBUF        #h3000
!def    BIOS_DISKLBL        #h3001
!def    BIOS_DISKLEN        #h3004
!def    BIOS_DISKENT        #h3005

!zone   bios_main

:entry          brch.a  a:bios

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

:mon_read       load.o  d:%Zz r:%GL o:#h1FF2
                push.r  s:%Zz 
                load.o  d:%Zz r:%GL o:#h1FF3
                push.r  s:%Zz 
                call.s  a:sdc_read
                stor.o  s:%Zz r:%GL o:#h1FF4
                pops.r  d:%Zz
                pops.r  d:%Zz
                rtrn.s
                
:mon_init       call.s  a:sdc_init
                stor.o  s:%Zz r:%GL o:#h1FF5
                rtrn.s
         
;:blinky         move.v  d:%GL v:#hFF s:#h8
;                move.v  d:%GL v:#hFFFF o:%TRUE                      ; Fill value
;:.blinkloop     subr.v  d:%GL a:%GL v:#h01
;                cmpr.v  a:%GL v:#h00
;                brch.a  c:%NEQ a:.blinkloop
;                xorb.v  d:%CS a:%CS v:#h01 s:#h08                   ; Invert
;                brch.a  a:blinky                                    ; Repeat
                
:bios           move.v  d:%SP v:#h1100                              ; Put the stack somewhere handy (on the chip RAM)
                move.v  d:%GL v:#h00                                ; So that monitor control jumps work
                
;                brch.a  a:blinky
                
                call.s  a:ioc_init
                move.v  d:%Xw v:#h7FFF
                push.r  s:%Xw
                move.v  d:%Xw v:#h00
                push.r  s:%Xw
                call.s  a:ioc_send
                pops.r  d:%Xw
                pops.r  d:%Xw                                       ; Reset the I/O controller
                            
                ;call.s  a:vga_init                                  ; Start up video

                move.v  d:%Xw v:bios_str.str_welcome
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Print the welcome message

                move.v  d:%Xw v:bios_str.str_postbgn
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Announce the beginning of the POSTs

:.memtest       move.v  d:%Xw v:bios_str.str_postmem
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Test the memory
                
                move.v  d:%Xx v:#h3000
                move.v  d:%Xy v:#h3010                              ; Go to 6000 normally - cut down to speed testing
:.memloop       stor.o  r:%Xx s:%Xx 
                load.o  r:%Xx d:%Xw 
                cmpr.r  a:%Xw b:%Xx 
                brch.a  c:%NEQ a:.memchek
                move.v  d:%Zz v:#h00
                stor.o  r:%Xx s:%Zz
                addr.v  d:%Xx a:%Xx v:#h01
                cmpr.r  a:%Xx b:%Xy
                brch.a  c:%EQL a:.memchek
                brch.a  a:.memloop
                
:.memchek       move.v  d:%Xw v:bios_str.str_postnot
                cmpr.r  a:%Xx b:%Xy
                brch.a  c:%NEQ a:.memrept
                move.v  d:%Xw v:bios_str.str_postokt
:.memrept       push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Report result
                
                move.v  d:%Xw v:bios_str.str_postcmp
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Report end of POSTs
                                
                                
                brch.a  a:.monitor                           ; The emulator doesn't have an SD card - go right to the monitor
                                                
                                                
                move.v  d:%Xw v:#h41
                push.r  s:%Xw
                call.s  a:spi_send
                pops.r  d:%Xw                                       ; Send a garbage byte to "warm up" the SPI core
                
                move.v  d:%Xw v:bios_str.str_mountda
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Announce that we're trying to mount the first SD card
                
                call.s  a:sdc_init                                  ; Initialize the first SD card
                push.r  s:%Zz                                       ; We'll need this later
                
                move.v  d:%Xw v:bios_str.str_mountno
                cmpr.v  a:%Zz v:#hFF                                ; Did it fail?
                brch.a  c:%EQL a:.sdcprint                          ; If so, we guessed correctly
                move.v  d:%Xw v:bios_str.str_mountok                ; Passing string
:.sdcprint      push.r  s:%Xw 
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Print the correct string
                
                pops.r  d:%Zz                                       
                cmpr.v  a:%Zz v:#hFF
                brch.a  c:%EQL a:.monitor                           ; No need to look for a filesystem if the disk's dead
                       
                move.v  d:%Xw v:bios_str.str_diskbgn
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Time to look for a filesystem
                
                move.v  d:%Xw v:BIOS_DISKBUF
                push.r  s:%Xw 
                move.v  d:%Xw v:#h0
                push.r  s:%Xw 
                call.s  a:sdc_read
                pops.r  d:%Xw
                pops.r  d:%Xw                                       ; Load the first block into memory
                
                move.v  d:%Xw v:BIOS_DISKBUF
                load.o  r:%Xw d:%Zz                                 ; Check the magic
                cmpr.v  a:%Zz v:#hEA s:#h0C                         ; Is it hEA000000?
                brch.a  c:%EQL a:.gooddisk                          ; If not, continue
                move.v  d:%Xw v:bios_str.str_diskerr
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Disk is corrupt
                brch.a  a:.monitor                                  ; Give up
                
:.gooddisk      move.v  d:%Xw v:bios_str.str_disklba
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "Found disk"
                move.v  d:%Xw v:BIOS_DISKLBL
                push.r  s:%Xw
                move.v  d:%Xw v:#h0C
                push.r  s:%Xw
                call.s  a:str_putsl
                pops.r  d:%Xw
                pops.r  d:%Xw                                       ; Label
                move.v  d:%Xw v:bios_str.str_disklbb
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "at block 0"
                
                move.v  d:%Xw v:BIOS_DISKBUF
                load.o  r:%Xw d:%Zz                                 ; Check the length
                cmpr.v  a:%Zz v:#h00                                ; Are there any entries on the disk?
                brch.a  c:%NEQ a:.notempty                          ; If not, continue
                move.v  d:%Xw v:bios_str.str_diskemp
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Disk is empty
                brch.a  a:.monitor                                  ; Give up
                
:.notempty      move.v  d:%Xw v:bios_str.str_disksza
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Disk has stuff on it
                move.v  d:%Xw v:BIOS_DISKLEN
                load.o  r:%Xw d:%Zz                                 ; Check the length
                push.r  s:%Zz 
                move.v  d:%Xw v:#h02
                push.r  s:%Xw
                call.s  a:str_lnum
                pops.r  d:%Xw
                pops.r  d:%Zz                                       ; Number of entries
                move.v  d:%Xw v:bios_str.str_diskszb
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Cool cool
                
                move.v  d:%Xw v:bios_str.str_diskchs
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; List the entries

                move.v  d:%Xw v:BIOS_DISKLEN
                load.o  r:%Xw d:%Xy                                 ; Get loop value
                arsl.v  d:%Xx a:%Xy v:#h02
                arsl.v  d:%Xy a:%Xy v:#h01
                addr.r  d:%Xy a:%Xy b:%Xx                           
                move.v  d:%Xx v:BIOS_DISKENT
                addr.r  d:%Xy a:%Xx b:%Xy                           ; Get start address and end address
                move.v  d:%Xz v:#h00                                ; Just for show
                
:.listloop      move.v  d:%Xw v:bios_str.str_dropspc
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "Indent"

                push.r  s:%Xz
                move.v  d:%Xw v:#h02
                push.r  s:%Xw
                call.s  a:str_lnum
                pops.r  d:%Xw
                pops.r  d:%Xz                                       ; Number
                
                move.v  d:%Xw v:bios_str.str_diskena
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "Entry"
                
                push.r  s:%Xx 
                move.v  d:%Xw v:#h0C
                push.r  s:%Xw
                call.s  a:str_putsl
                pops.r  d:%Xw
                pops.r  d:%Xx
                addr.v  d:%Xx a:%Xx v:#h03                          ; Entry string
                
                move.v  d:%Xw v:bios_str.str_diskenb
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "start"
                
                load.o  r:%Xx d:%Xw
                push.r  s:%Xw
                call.s  a:str_hnum
                pops.r  d:%Xw
                addr.v  d:%Xx a:%Xx v:#h01                          ; Start block
                
                move.v  d:%Xw v:bios_str.str_diskenc
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "length"
                
                load.o  r:%Xx d:%Xw
                push.r  s:%Xw
                call.s  a:str_hnum
                pops.r  d:%Xw
                addr.v  d:%Xx a:%Xx v:#h01                          ; Length block
                
                move.v  d:%Xw v:bios_str.str_diskend
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "load"
            
                load.o  r:%Xx d:%Xw
                push.r  s:%Xw
                call.s  a:str_hnum
                pops.r  d:%Xw
                addr.v  d:%Xx a:%Xx v:#h01                          ; Load block
                
                move.v  d:%Xw v:bios_str.str_dropnxt
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; "Drop"
                
                addr.v  d:%Xz a:%Xz v:#h01                          ; Increment show number
                cmpr.r  a:%Xx b:%Xy                                 ; Are we finished?
                brch.a  c:%LOW a:.listloop                          ; If not, loop back up
                
                move.v  d:%Xw v:bios_str.str_dropnxt
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Drop down a line
                
:.chooseorp     move.v  d:%Xw v:bios_str.str_diskprm
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Prompt the user to choose an entry
                
:.chooseloop    call.s  a:ser_srcv                                  ; Get a character
                push.r  s:%Zz 
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:%Zz
                
                cmpr.v  a:%Zz v:#h47                                ; Is it gonna be a number?
                brch.a  c:%HOS a:.notnum                            ; If not, run
                
:.number        subr.v  d:%Zz a:%Zz v:#h30      
                cmpr.v  a:%Zz v:#h0A
                brch.a  c:%LOW a:.goodnum
                subr.v  d:%Zz a:%Zz v:#h07 
                cmpr.v  a:%Zz v:#h0A
                brch.a  c:%LOW a:.badnum               
                cmpr.v  a:%Zz v:#h10
                brch.a  c:%LOW a:.goodnum                           ; Convert character to hex digit

:.badnum        move.v  d:%Xw v:bios_str.str_dropnxt
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Drop down a line
                brch.a  a:.chooseorp                                ; Try again
                
:.notnum        push.r  s:%Zz                                       ; We need this

                move.v  d:%Xw v:bios_str.str_dropnxt
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Drop down a line
                
                pops.r  d:%Zz                                       ; Bring it back around
                
                cmpr.v  a:%Zz v:#h4D                                ; Is it "M"?
                brch.a  c:%EQL a:.monitor                           ; If so, jump to the monitor
                brch.a  a:.chooseorp                                ; Else, try again
                
:.goodnum       push.r  s:%Zz

                move.v  d:%Xw v:bios_str.str_dropnxt
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       ; Drop down a line
                
                move.v  d:%Xw v:bios_str.str_disklod
                push.r  s:%Xw
                call.s  a:str_puts
                pops.r  d:%Xw                                       
                pops.r  d:%Zz                                       ; Loading message
                
                arsl.v  d:%Xx a:%Zz v:#h02
                arsl.v  d:%Zz a:%Zz v:#h01
                addr.r  d:%Zz a:%Zz b:%Xx
                move.v  d:%Xx v:BIOS_DISKENT
                addr.r  d:%Yw a:%Xx b:%Zz                           ; Calculate the entry location
                
                load.o  r:%Yw d:%Xx o:#h03                          ; Start block
                load.o  r:%Yw d:%Xy o:#h04                          ; Length block
                load.o  r:%Yw d:%Xz o:#h05                          ; Load block              
                
:.loadloop      push.r  s:%Xz
                push.r  s:%Xx
                call.s  a:sdc_read
                pops.r  d:%Xx
                pops.r  d:%Xz                                       ; Load the first block

                cmpr.v  a:%Zz v:#h00
                brch.a  c:%NEQ a:.monitor
                
                addr.v  d:%Xx a:%Xx v:#h01                          ; Increment current block
                addr.v  d:%Xz a:%Xz v:#h80                          ; Increment load address
                subr.v  d:%Xy a:%Xy v:#h01                          ; Decrement length
                
                cmpr.v  a:%Xy v:#h00                                ; Are we done?
                brch.a  c:%NEQ a:.loadloop                          ; If not, loop back up
                
:.runit         call.s  a:vga_sclr                                  ; Clear the screen
                load.o  r:%Yw d:%Xz o:#h05                          ; Load block
                ;push.r  s:%Xz
                ;call.s  a:str_hnum
                ;pops.r  d:%Xz
                brch.o  r:%Xz                                       ; Run the program
                
:.monitor       move.v  d:%Xw v:bios_str.str_monitor
                push.r  s:%Xw
                call.s  a:str_puts  
                pops.r  d:%Xw                                       ; We're just going to immediately enter the monitor
                
                brch.a  a:lemon_entr
                


!zone   bios_str

:.str_welcome   !str "epRISC Bootloader v3.4\n\rcopyright 2015-2017 Proportional Labs\n\r\n\r\0"
:.str_mountda   !str "Attempting to mount SD card in slot A...\n\r\0"
:.str_mountdb   !str "Attempting to mount SD card in slot B...\n\r\0"
:.str_mountok   !str "  SD card mounted successfully.\n\r\n\r\0"
:.str_mountno   !str "  Error mounting SD card.\n\r\n\r\0"

:.str_diskbgn   !str "Fetching disk info...\n\r\0"
:.str_diskerr   !str "  Disk appears to be corrupt.\n\r\n\r\0"
:.str_disklba   !str "  Found disk '\0"
:.str_disklbb   !str "' at block 0.\n\r\0"
:.str_diskemp   !str "  Disk appears to be empty.\n\r\n\r\0"
:.str_disksza   !str "  Found \0"
:.str_diskszb   !str " entries on disk.\n\r\n\r\0"
:.str_diskchs   !str "Available entries:\n\r\0"
:.str_diskena   !str ": Entry '\0"
:.str_diskenb   !str "': start \0"
:.str_diskenc   !str ", length \0"
:.str_diskend   !str ", load \0"
:.str_diskprm   !str "Select an entry to execute, or type 'M' to enter the monitor: \0"
:.str_disklod   !str "  Loading entry...\n\r\n\r\0"

:.str_postbgn   !str "Starting POSTs...\n\r\0"
:.str_postmem   !str "  Memory          \0"
:.str_postser   !str "  UART            \0"
:.str_postspi   !str "  SPI             \0"
:.str_postsys   !str "  sysX Bus        \0"
:.str_postioc   !str "  I/O Controller  \0"
:.str_postokt   !str "OK\n\r\0"
:.str_postnot   !str "FAIL\n\r\0"
:.str_postgud   !str "  POST successful.\n\r\n\r\0"
:.str_postfal   !str "  POST unsuccessful.\n\r\n\r\0"
:.str_postcmp   !str "  POSTs complete.\n\r\n\r\0"

:.str_monitor   !str "Entering monitor...\n\r\n\r\0"
:.str_dropnxt   !str "\n\r\0"
:.str_dropspc   !str "  \0"

!include    "bios_bus.asm"
!include    "bios_uart_fast.asm"
!include    "bios_spi.asm"
!include    "bios_string.asm"
!include    "bios_sdcard.asm"
!include    "bios_video.asm"
!include    "bios_debug.asm"
!include    "lemon_main.asm"
