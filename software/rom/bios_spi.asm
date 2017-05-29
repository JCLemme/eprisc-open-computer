; epRISC development platform - BIOS SPI master control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines command the onboard I/O controller's SPI bus master. Will be optimized later.


!def    SPI_CONF_ADDRESS    #h020
!def    SPI_MOSI_ADDRESS    #h021
!def    SPI_MISO_ADDRESS    #h022


!zone   spi_addr
!def    REG_ADDR    %Zw
!def    REG_WORK    %Zx
!def    REG_RESP    %Zz

:spi_addr       push.r  s:REG_ADDR
                push.r  s:REG_WORK
                subr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                pops.r  d:REG_ADDR                                  ; Get the number we're supposed to print
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                
                move.v  d:REG_WORK v:SPI_CONF_ADDRESS
                push.r  s:REG_WORK
                call.s  a:ioc_recv
                pops.r  d:REG_WORK                                  ; Get current configuration register
                
                mski.v  d:REG_RESP a:REG_RESP v:#h78
                arsl.v  d:REG_ADDR a:REG_ADDR v:#h03
                orbt.r  d:REG_ADDR a:REG_ADDR b:REG_RESP            ; Calculate mask
                
                push.r  s:REG_WORK
                push.r  s:REG_ADDR
                call.s  a:ioc_send
                pops.r  d:REG_ADDR
                pops.r  d:REG_WORK                                  ; Set new mask
                
                pops.r  d:REG_WORK
                pops.r  d:REG_ADDR
                rtrn.s                                              ; And return
                
                
!zone   spi_send
!def    REG_DATA    %Zw
!def    REG_WORK    %Zx
!def    REG_RESP    %Zz

:spi_send       push.r  s:REG_DATA
                push.r  s:REG_WORK
                subr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                pops.r  d:REG_DATA                                  ; Get the number we're supposed to print
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                
                move.v  d:REG_WORK v:SPI_MOSI_ADDRESS
                push.r  s:REG_WORK
                push.r  s:REG_DATA
                call.s  a:ioc_send
                pops.r  d:REG_DATA
                pops.r  d:REG_WORK                                  ; Write data to send
                
                move.v  d:REG_WORK v:SPI_CONF_ADDRESS
                push.r  s:REG_WORK
                call.s  a:ioc_recv
                pops.r  d:REG_WORK                                  ; Get current configuration register
                
;                move.v  d:REG_RESP v:#h00
                orbt.v  d:REG_RESP a:REG_RESP v:#h80                ; Calculate mask
                
                push.r  s:REG_WORK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_WORK                                  ; Set new mask
                
                move.v  d:REG_WORK v:SPI_CONF_ADDRESS
                push.r  s:REG_WORK
:.chkloop       call.s  a:ioc_recv
                test.v  a:REG_RESP v:#h80
                brch.a  c:%NEQ a:.chkloop
                
                pops.r  d:REG_WORK 
                
                move.v  d:REG_WORK v:SPI_MISO_ADDRESS
                push.r  s:REG_WORK
                call.s  a:ioc_recv
                pops.r  d:REG_WORK                                  ; Get captured data
                
                pops.r  d:REG_WORK
                pops.r  d:REG_DATA
                rtrn.s                                              ; And return
                
                
!zone   spi_recv
!def    REG_WORK    %Zx
!def    REG_RESP    %Zz

:spi_recv       push.r  s:REG_WORK                                  ; Set up the stack
                
                move.v  d:REG_WORK v:SPI_MOSI_ADDRESS
                push.r  s:REG_WORK
                move.v  d:REG_WORK v:#hFF
                push.r  s:REG_WORK
                call.s  a:ioc_send
                pops.r  d:REG_WORK
                pops.r  d:REG_WORK                                  ; Write data to send
                
                move.v  d:REG_WORK v:SPI_CONF_ADDRESS
                push.r  s:REG_WORK
                call.s  a:ioc_recv
                pops.r  d:REG_WORK                                  ; Get current configuration register
                
                orbt.v  d:REG_RESP a:REG_RESP v:#h80                ; Calculate mask
                
                push.r  s:REG_WORK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_WORK                                  ; Set new mask
                
                move.v  d:REG_WORK v:SPI_CONF_ADDRESS
                push.r  s:REG_WORK
:.chkloop       call.s  a:ioc_recv
                test.v  a:REG_RESP v:#h80
                brch.a  c:%NEQ a:.chkloop
                
                pops.r  d:REG_WORK 
                
                move.v  d:REG_WORK v:SPI_MISO_ADDRESS
                push.r  s:REG_WORK
                call.s  a:ioc_recv
                pops.r  d:REG_WORK                                  ; Get captured data
                
                pops.r  d:REG_WORK
                rtrn.s                                              ; And return
