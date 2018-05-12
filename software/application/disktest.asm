; epRISC development platform - MBR and ext2 testing routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Test routines for reading the Master Boot Record of a disk and loading an ext2 partition from a disk.

!ip     h00004000
!def    BUS_BASE_ADDRESS    h2000


; Vector table - makes jumping in from Lemon easy

:jdsk_gparts    brch.a  a:dsk_gparts
:jdsk_rsuper    brch.a  a:dsk_rsuper

!zone   dsk_gparts
!def    REG_DADR    %Zw
!def    REG_STRA    %Zx
!def    REG_TEMP    %Zy
!def    REG_RESP    %Zz

:dsk_gparts     push.r  s:REG_DADR
                push.r  s:REG_STRA
                push.r  s:REG_TEMP

                move.v  d:REG_DADR v:#h8000                         ; Where the disk image starts
                
                addr.v  d:REG_DADR a:REG_DADR v:#h7F                ; Look for the MBR signature
                move.v  d:REG_TEMP v:#hFFFF 
                load.o  d:REG_STRA r:REG_DADR
                andb.r  d:REG_STRA a:REG_STRA b:REG_TEMP
                move.v  d:REG_TEMP v:#h55AA 
                cmpr.r  a:REG_STRA b:REG_TEMP                       ; Is MBR signature valid?
                brch.a  c:%EQL a:.goodmbr                           ; If so, do something about it
                move.v  d:%Yw v:dsk_strcrrpt                        ; Disk is corrupt
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; Print the crash message
                brch.a  a:.exit                                     ; And abort
                
:.goodmbr       move.v  d:%Yw v:dsk_strvalid                        ; Disk is valid
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; Print the acceptance message
                
                subr.v  d:REG_DADR a:REG_DADR v:#h7F                ; Get the disk offset back

                move.v  d:%Yw v:dsk_strplabl                        ; "Partition"
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       
                
                move.v  d:REG_TEMP v:#h01
                push.r  s:REG_TEMP
                call.s  a:str_hnum
                pops.r  d:REG_TEMP                                  ; Partition number
                
                move.v  d:%Yw v:dsk_strplabn                        ; ":"
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw   
                
                addr.v  d:REG_DADR a:REG_DADR v:#h70                ; Block with the partition ID
                load.o  d:REG_STRA r:REG_DADR
                masr.v  d:REG_STRA a:REG_STRA v:#hFF s:#h04         ; Get said partition ID
                cmpr.v  a:REG_STRA v:#h00
                brch.a  c:%NEQ a:.prespart
                move.v  d:%Yw v:dsk_strempty                        ; Partition isn't there
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; Print the empty message
                brch.a  a:.exit                                     ; And abort  
                
:.prespart      move.v  d:%Yw v:dsk_strtypen                        ; Partition is there
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "Partition type is"

                push.r  s:REG_STRA
                call.s  a:str_hnum
                pops.r  d:REG_STRA                                  ; Partition type
                
                move.v  d:%Yw v:dsk_strplabd                        ; "."
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw   
                
                addr.v  d:REG_DADR a:REG_DADR v:#h01                ; The starting sector lives in the next word
                load.o  d:REG_STRA r:REG_DADR
                arsl.v  d:REG_STRA a:REG_STRA v:#h10
                addr.v  d:REG_DADR a:REG_DADR v:#h01                ; The rest of the starting sector lives in the next word
                load.o  d:REG_TEMP r:REG_DADR
                push.r  s:REG_STRA
                move.v  d:REG_STRA v:#hFFFF 
                andb.r  d:REG_TEMP a:REG_TEMP b:REG_STRA
                losr.v  d:REG_TEMP a:REG_TEMP v:#h10
                pops.r  d:REG_STRA
                orbt.r  d:REG_STRA a:REG_STRA b:REG_TEMP            ; REASSEMBLE
                endx.r  d:REG_STRA a:REG_STRA                       ; Value is stored little-endian, so convert that into something we can use
                
                move.v  d:%Yw v:dsk_strloadn                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "Partition starts at"

                push.r  s:REG_STRA
                call.s  a:str_hnum
                pops.r  d:REG_STRA                                  ; Partition start LBA
                
                move.v  d:%Yw v:dsk_strplabd                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "."
                
                load.o  d:REG_STRA r:REG_DADR
                arsl.v  d:REG_STRA a:REG_STRA v:#h10
                addr.v  d:REG_DADR a:REG_DADR v:#h01                ; The rest of the run length lives in the next word
                load.o  d:REG_TEMP r:REG_DADR
                push.r  s:REG_STRA
                move.v  d:REG_STRA v:#hFFFF 
                andb.r  d:REG_TEMP a:REG_TEMP b:REG_STRA
                losr.v  d:REG_TEMP a:REG_TEMP v:#h10
                pops.r  d:REG_STRA
                orbt.r  d:REG_STRA a:REG_STRA b:REG_TEMP            ; REASSEMBLE
                endx.r  d:REG_STRA a:REG_STRA                       ; Value is stored little-endian, so convert that into something we can use
                
                move.v  d:%Yw v:dsk_strlengn                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "Partition runs for"

                push.r  s:REG_STRA
                call.s  a:str_hnum
                pops.r  d:REG_STRA                                  ; Partition length in LBA
                
                move.v  d:%Yw v:dsk_strplabs                      
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "sectors."
                
:.exit          pops.r  d:REG_TEMP
                pops.r  d:REG_STRA
                pops.r  d:REG_DADR
                rtrn.s                                              ; And return



!zone   dsk_rsuper
!def    REG_DADR    %Zw
!def    REG_STRA    %Zx
!def    REG_TEMP    %Zy
!def    REG_RESP    %Zz

:dsk_rsuper     push.r  s:REG_DADR
                push.r  s:REG_STRA
                push.r  s:REG_TEMP

                move.v  d:REG_DADR v:#h48000                        ; Where the partition starts        
                addr.v  d:REG_DADR a:REG_DADR v:#h10 s:#h02         ; The superblock begins 100 words ahead of the partition start
                
                addr.v  d:REG_DADR a:REG_DADR v:#h0E                ; Look for the magic number
                load.o  d:REG_STRA r:REG_DADR
                endx.r  d:REG_STRA a:REG_STRA
                move.v  d:REG_TEMP v:#hFFFF 
                andb.r  d:REG_STRA a:REG_STRA b:REG_TEMP
                move.v  d:REG_TEMP v:#hEF53
                cmpr.r  a:REG_STRA b:REG_TEMP
                brch.a  c:%EQL a:.goodsblk                          ; Jump away if the superblock is present
                 
                move.v  d:%Yw v:dsk_xbadblock                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; Bad superblock
                brch.a  a:.exit
                
:.goodsblk      move.v  d:%Yw v:dsk_xgudblock                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; Good superblock

                move.v  d:%Yw v:dsk_xlabelbeg                       
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "Disk"
                
                subr.v  d:REG_DADR a:REG_DADR v:#h0E               
                addr.v  d:REG_DADR a:REG_DADR v:#h1E                ; Volume label
                push.r  s:REG_DADR
                call.s  a:str_puts
                pops.r  d:REG_DADR

                move.v  d:%Yw v:dsk_xlabelend                        
                push.r  s:%Yw
                call.s  a:str_puts
                pops.r  d:%Yw                                       ; "loaded"
                
                subr.v  d:REG_DADR a:REG_DADR v:#h1E               
                addr.v  d:REG_DADR a:REG_DADR v:#h1E                ; Volume label
                
:.exit          pops.r  d:REG_TEMP
                pops.r  d:REG_STRA
                pops.r  d:REG_DADR
                rtrn.s                                              ; And return
                
                
:dsk_strcrrpt   !str "MBR appears corrupt.\n\r\0"
:dsk_strvalid   !str "MBR is valid.\n\r\0"
:dsk_strplabl   !str "Partition \0"
:dsk_strplabn   !str ":\n\r\0"
:dsk_strplabd   !str ".\n\r\0"
:dsk_strplabr   !str "\n\r\0"
:dsk_strplabs   !str " sectors.\n\r\0"
:dsk_strempty   !str "  Partition is not present.\n\r\0"
:dsk_strtypen   !str "  Partition type is \0"
:dsk_strloadn   !str "  Partition starts at \0"
:dsk_strlengn   !str "  Partition runs for \0"

:dsk_xbadblock  !str "Superblock is corrupt.\n\r\0"
:dsk_xgudblock  !str "Superblock is present.\n\r\0"
:dsk_xlabelbeg  !str "Mounting partition \"\0"
:dsk_xlabelbeg  !str "\"...\n\r\0"

!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_video.asm"
