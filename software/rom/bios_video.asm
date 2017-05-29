; epRISC development platform - BIOS video terminal control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines control the system's character terminal.


!def    VGA_ADDR_OFFS   #hFF
!def    VGA_ADDR_BASE   #h80
!def    VGA_ADDR_CPTR   #h1FE0
!def    VGA_ADDR_CCOL   #h1FE1


!zone   vid_init
!def    REG_ICOL    %Zw
!def    REG_LADR    %Zx
!def    REG_RESP    %Zz

:vid_init       push.r  s:REG_ICOL
                push.r  s:REG_LADR
                subr.v  d:%SP a:%SP v:#h03
                pops.r  d:REG_ICOL
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                
                move.v  d:REG_LADR v:VGA_ADDR_CCOL
                stor.o  r:REG_LADR s:REG_ICOL                       ; Set the text color
                
                move.v  d:REG_LADR v:VGA_ADDR_CPTR
                move.v  d:REG_ICOL v:#h00
                stor.o  r:REG_LADR s:REG_ICOL                       ; Set the character pointer to zero
                
                ;call.s  a:vid_sclr                                  ; Blank the display
                
                pops.r  d:REG_LADR
                pops.r  d:REG_ICOL
                rtrn.s                                              ; And return
                
                
!zone   vid_sclr
!def    REG_CPTR    %Zw
!def    REG_OFFS    %Zx
!def    REG_RESP    %Zz

:vid_sclr       push.r  s:REG_CPTR
                push.r  s:REG_OFFS                                  ; Protect the registers we're clobbering
                
                move.v  d:REG_CPTR v:#h00                           
                move.v  d:REG_OFFS v:#h00                           ; Start from the top
                
                move.v  d:REG_RESP v:VGA_ADDR_CPTR
                stor.o  r:REG_RESP s:REG_CPTR                       ; Set the character pointer to zero
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_OFFS
                call.s  a:ioc_send
                pops.r  d:REG_OFFS
                pops.r  d:REG_RESP                                  ; Set line to zero
                
:.looptop       move.v  d:REG_RESP v:VGA_ADDR_BASE
                addr.r  d:REG_RESP a:REG_RESP b:REG_CPTR
                push.r  s:REG_RESP
                move.v  d:REG_RESP v:#h00
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_RESP
                pops.r  d:REG_RESP                                  ; Set the character to BLANK
                
                addr.v  d:REG_CPTR a:REG_CPTR v:#h01                ; Increment the pointer
                cmpr.v  a:REG_CPTR v:#h50                           ; Did we overflow?
                brch.a  c:%NEQ a:.looptop                           ; If not, repeat
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS      
                push.r  s:REG_RESP    
                call.s  a:ioc_recv
                move.r  d:REG_OFFS s:REG_RESP
                pops.r  d:REG_RESP                                  ; Get line offset
                
                addr.v  d:REG_OFFS a:REG_OFFS v:#h50                ; Increment offset
                cmpr.v  a:REG_OFFS v:#hC8 s:#h02                    ; Did we overflow?
                brch.a  c:%EQL a:.exitloop
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_OFFS
                call.s  a:ioc_send
                pops.r  d:REG_OFFS
                pops.r  d:REG_RESP                                  ; Set line to new offset
                
                brch.a  a:.looptop                                  ; And loop back
                
:.exitloop      move.v  d:REG_CPTR v:#h00                           
                move.v  d:REG_OFFS v:#h00                           ; Back to the top
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_OFFS
                call.s  a:ioc_send
                pops.r  d:REG_OFFS
                pops.r  d:REG_RESP                                  ; Set line to zero
                
                pops.r  d:REG_OFFS
                pops.r  d:REG_CPTR
                rtrn.s                                              ; And return


!zone   vid_spos
!def    REG_CPOS    %Zw
!def    REG_LINE    %Zx
!def    REG_RESP    %Zz

:vid_spos       push.r  s:REG_CPOS
                push.r  s:REG_LINE
                subr.v  d:%SP a:%SP v:#h03
                pops.r  d:REG_LINE
                pops.r  d:REG_CPOS
                addr.v  d:%SP a:%SP v:#h05                          ; Set up the stack
                
                move.v  d:REG_RESP v:VGA_ADDR_CPTR
                stor.o  r:REG_RESP s:REG_CPOS                       ; Set the character pointer to the provided value
                
                arsl.v  d:REG_CPOS a:REG_LINE v:#h04
                arsl.v  d:REG_LINE a:REG_LINE v:#h06
                addr.r  d:REG_LINE a:REG_LINE b:REG_CPOS            ; Multiply line by h50
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_LINE
                call.s  a:ioc_send
                pops.r  d:REG_LINE
                pops.r  d:REG_RESP                                  ; Set line to new value

                pops.r  d:REG_LINE
                pops.r  d:REG_CPOS
                rtrn.s                                              ; And return
                

!zone   vid_wraw
!def    REG_RESP    %Zz

:vid_wraw       rtrn.s

;Write data to CPTR, offset
;Increment CPTR
;If CPTR > 80, set to 0 and increment offset
;If offset > 40, set to 0


!zone   vid_putc
!def    REG_HCHR    %Zw
!def    REG_RESP    %Zz

:vid_putc       push.r  s:REG_HCHR
                subr.v  d:%SP a:%SP v:#h02
                pops.r  d:REG_HCHR
                addr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                
                cmpr.v  a:REG_HCHR v:#h20                           ; Is it greater than/equal to h20?
                brch.a  c:%GET a:.print                             ; If so, print it right away
                
                cmpr.v  a:REG_HCHR v:#h0D                           ; Is is a carriage return?
                brch.a  c:%NEQ a:.notcr                             ; If not, continue past this
                move.v  d:REG_HCHR v:#h00                           
                move.v  d:REG_RESP v:VGA_ADDR_CPTR
                stor.o  r:REG_RESP s:REG_HCHR                       ; Set the character pointer to zero
                brch.a  a:.exit                                     ; We're done here
                
:.notcr         cmpr.v  a:REG_HCHR v:#h0A                           ; Is is a line feed?
                brch.a  c:%NEQ a:.notlf                             ; If not, continue past this
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                call.s  a:ioc_recv
                move.r  d:REG_HCHR s:REG_RESP
                pops.r  d:REG_RESP                                  ; Get the current line
                addr.v  d:REG_HCHR a:REG_HCHR v:#h50                ; Add another to it
                cmpr.v  a:REG_HCHR v:#hC8 s:#h02                    ; Did we overflow?
                brch.a  c:%NEQ a:.noover                            ; If not, the offset is valid
                call.s  a:vid_sclr                                  ; Clear the screen
                brch.a  a:.exit                                     ; And quit

:.noover        move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_HCHR
                call.s  a:ioc_send
                pops.r  d:REG_HCHR
                pops.r  d:REG_RESP                                  ; Set line to new value
                brch.a  a:.exit                                     ; And quit
                
:.notlf         brch.a  a:.exit                                     ; Ignore it

:.print         move.v  d:REG_RESP v:VGA_ADDR_CPTR
                load.o  r:REG_RESP d:REG_RESP
                addr.v  d:REG_RESP a:REG_RESP v:VGA_ADDR_BASE      
                push.r  s:REG_RESP                                  ; Set the base address
                move.v  d:REG_RESP v:VGA_ADDR_CCOL
                load.o  r:REG_RESP d:REG_RESP      
                arsl.v  d:REG_RESP a:REG_RESP v:#h08                 
                orbt.r  d:REG_HCHR a:REG_HCHR b:REG_RESP            
                push.r  s:REG_HCHR                                  ; Set the text color
                call.s  a:ioc_send
                pops.r  d:REG_HCHR
                pops.r  d:REG_RESP                                  ; Send the character
                
                move.v  d:REG_RESP v:VGA_ADDR_CPTR
                load.o  r:REG_RESP d:REG_HCHR
                addr.v  d:REG_HCHR a:REG_HCHR v:#h01                
                stor.o  r:REG_RESP s:REG_HCHR                       ; Increment the pointer
                
                cmpr.v  a:REG_HCHR v:#h50                           ; Did we go over?
                brch.a  c:%NEQ a:.exit                              ; If not, exit
                
                move.v  d:REG_HCHR v:#h00
                move.v  d:REG_RESP v:VGA_ADDR_CPTR
                stor.o  r:REG_RESP s:REG_HCHR                       ; Zero the pointer
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS      
                push.r  s:REG_RESP    
                call.s  a:ioc_recv
                move.r  d:REG_HCHR s:REG_RESP
                pops.r  d:REG_RESP                                  ; Get line offset
                
                addr.v  d:REG_HCHR a:REG_HCHR v:#h50                ; Increment offset
                cmpr.v  a:REG_HCHR v:#hC8 s:#h02                    ; Did we overflow?
                brch.a  c:%EQL a:.cexit                             ; If so, clear
                
                move.v  d:REG_RESP v:VGA_ADDR_OFFS          
                push.r  s:REG_RESP
                push.r  s:REG_HCHR
                call.s  a:ioc_send
                pops.r  d:REG_HCHR
                pops.r  d:REG_RESP                                  ; Set line to new offset
                
                brch.a  a:.exit
                
:.cexit         call.s  a:vid_sclr

:.exit          pops.r  d:REG_HCHR
                rtrn.s                                              ; And return

