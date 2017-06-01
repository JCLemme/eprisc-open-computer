; epRISC development platform - BIOS video terminal control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines control the system's character terminal.


!def    VGA_ADDR_CNFG   #h30
!def    VGA_ADDR_CLMN   #h31
!def    VGA_ADDR_CROW   #h32
!def    VGA_ADDR_DATA   #h33


!zone   vga_init
!def    REG_CWRK    %Zx
!def    REG_RESP    %Zz

:vga_init       push.r  s:REG_CWRK                                  ; Set up the stack

                move.v  d:REG_CWRK v:VGA_ADDR_CNFG
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear config register
                
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear column register
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear row register
                
                call.s  a:vga_sclr                                  ; Clear the screen
                
                pops.r  d:REG_CWRK
                rtrn.s                                              ; And return
                
                
!zone   vga_sclr
!def    REG_CWRK    %Zx
!def    REG_RESP    %Zz

:vga_sclr       push.r  s:REG_CWRK

                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear column register
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear row register
                
:.loop          move.v  d:REG_CWRK v:VGA_ADDR_DATA
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear the current cell
                
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                call.s  a:ioc_recv
                pops.r  d:REG_CWRK                                  ; Get current column
                
                ;push.r  s:REG_RESP
                ;call.s  a:str_hnum
                ;pops.r  d:REG_RESP 
                
                addr.v  d:REG_RESP a:REG_RESP v:#h01                ; Increment column
                push.r  s:REG_RESP
                
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_CWRK                                  ; Save new column register
                
                pops.r  d:REG_RESP
                cmpr.v  a:REG_RESP v:#h50                           ; Did we go offscreen?
                brch.a  c:%NEQ a:.loop                              ; If not, jump back up
                
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear column register
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                call.s  a:ioc_recv
                pops.r  d:REG_CWRK                                  ; Get current row
                
                addr.v  d:REG_RESP a:REG_RESP v:#h01                ; Increment row
                push.r  s:REG_RESP
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_CWRK                                  ; Save new row register
                
                pops.r  d:REG_RESP
                cmpr.v  a:REG_RESP v:#h28                           ; Did we go offscreen?
                brch.a  c:%NEQ a:.loop                              ; If not, jump back up
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear row register
                
                pops.r  d:REG_CWRK
                rtrn.s                                              ; And return
                
                
!zone   vga_putc 
!def    REG_HCHR    %Zw
!def    REG_CWRK    %Zx
!def    REG_RESP    %Zz

:vga_putc       push.r  s:REG_HCHR
                push.r  s:REG_CWRK
                subr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                pops.r  d:REG_HCHR                                  ; Get the character we're supposed to print
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                
                cmpr.v  a:REG_HCHR v:#h20                           ; Is it greater than a space?
                brch.a  c:%HOS a:.print                             ; If so, it's visible
                
                cmpr.v  a:REG_HCHR v:#h0D                           ; Is it a carriage return?
                brch.a  c:%NEQ a:.notcr                             ; If not, jump down
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear column register
                brch.a  a:.exit                                     ; Get outta here
                
:.notcr         cmpr.v  a:REG_HCHR v:#h0A                           ; Is it a newline?
                brch.a  c:%NEQ a:.notlf                             ; If not, jump down
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                call.s  a:ioc_recv
                pops.r  d:REG_CWRK                                  ; Get current row
                
                addr.v  d:REG_RESP a:REG_RESP v:#h01                ; Increment row
                push.r  s:REG_RESP
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_CWRK                                  ; Save new row register
                
                pops.r  d:REG_RESP
                cmpr.v  a:REG_RESP v:#h28                           ; Did we go offscreen?
                brch.a  c:%EQL a:.cexit                             ; If so, clear before exit
                brch.a  a:.exit                                     ; Just exit
                
:.notlf         brch.a  a:.exit                                     ; Non-visible, so ignore it

:.print         orbt.v  d:REG_HCHR a:REG_HCHR v:#hFF s:#h04         ; Print in white

                move.v  d:REG_CWRK v:VGA_ADDR_DATA
                push.r  s:REG_CWRK
                push.r  s:REG_HCHR
                call.s  a:ioc_send
                pops.r  d:REG_HCHR
                pops.r  d:REG_CWRK                                  ; Set the current cell

                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                call.s  a:ioc_recv
                pops.r  d:REG_CWRK                                  ; Get current column
                
                addr.v  d:REG_RESP a:REG_RESP v:#h01                ; Increment column
                push.r  s:REG_RESP
                
                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_CWRK                                  ; Save new column register
                
                pops.r  d:REG_RESP
                cmpr.v  a:REG_RESP v:#h50                           ; Did we go offscreen?
                brch.a  c:%NEQ a:.exit                              ; If not, jump back up

                move.v  d:REG_CWRK v:VGA_ADDR_CLMN
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear column register
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                call.s  a:ioc_recv
                pops.r  d:REG_CWRK                                  ; Get current row
                
                addr.v  d:REG_RESP a:REG_RESP v:#h01                ; Increment row
                push.r  s:REG_RESP
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_CWRK                                  ; Save new row register

                pops.r  d:REG_RESP
                cmpr.v  a:REG_RESP v:#h28                           ; Did we go offscreen?
                brch.a  c:%NEQ a:.exit                              ; If not, jump back up
                
                move.v  d:REG_CWRK v:VGA_ADDR_CROW
                push.r  s:REG_CWRK
                move.v  d:REG_CWRK v:#h00
                push.r  s:REG_CWRK
                call.s  a:ioc_send
                pops.r  d:REG_CWRK
                pops.r  d:REG_CWRK                                  ; Clear row register

:.cexit         call.s  a:vga_sclr

:.exit          pops.r  d:REG_CWRK
                pops.r  d:REG_HCHR
                rtrn.s                                              ; And return
                
                
