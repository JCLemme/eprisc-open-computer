; epRISC development platform - String to ascii
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; Simple program that shows the hex value of any character you type.

!ip     h00004000
!def    BUS_BASE_ADDRESS    h2000
!def    REG_PWRK            %Xw
!def    REG_RESP            %Zz

:entry          call.s  a:ser_srcv                          ; Get a character
                push.r  s:REG_RESP
                
                move.v  d:REG_PWRK v:#h27
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK                          ; '
                
                call.s  a:ser_send
                call.s  a:vga_putc                          ; Character
                
                move.v  d:REG_PWRK v:#h27
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK                          ; '
                
                move.v  d:REG_PWRK v:#h3A
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK                          ; :
                
                move.v  d:REG_PWRK v:#h20
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK                          ;                      

                move.v  d:REG_PWRK v:#h02
                push.r  s:REG_PWRK
                call.s  a:str_lnum
                pops.r  d:REG_PWRK                          ; Number
                
                move.v  d:REG_PWRK v:#h0A
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK
                
                move.v  d:REG_PWRK v:#h0D
                push.r  s:REG_PWRK
                call.s  a:ser_send
                call.s  a:vga_putc
                pops.r  d:REG_PWRK
                
                pops.r  d:REG_RESP
                brch.a  a:entry                             ; And loop
                
                
!include    "../../rom/bios_bus.asm"
!include    "../../rom/bios_uart.asm"
!include    "../../rom/bios_string.asm"
!include    "../../rom/bios_video.asm"
