; epRISC development platform - BIOS UART control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines command the onboard I/O controller's UART. Will be retooled later.

!zone   ser_send
!def    REG_BASE    %Zw
!def    REG_DATA    %Zx
!def    REG_RESP    %Zz

:ser_send       push.r  s:REG_DATA
                push.r  s:REG_BASE
                subr.v  d:%SP a:%SP v:#h03
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS
                pops.r  d:REG_DATA                                  ; Set up the stack
                addr.v  d:%SP a:%SP v:#h04
                                
;                move.v  d:REG_RESP v:#h0100 s:#h08                  ; Form read packet at address
;                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
;                move.v  d:REG_RESP v:#h10005
;                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
;:.wloop         load.o  r:REG_BASE d:REG_RESP
;                test.v  a:REG_RESP v:#h01
;                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete
;                                
;:.sloop         move.v  d:REG_RESP v:#h0100 s:#h08                  ; Form read packet at address
;                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
;                move.v  d:REG_RESP v:#h10005
;                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
;:.xloop         load.o  r:REG_BASE d:REG_RESP
;                test.v  a:REG_RESP v:#h01
;                brch.a  c:%NEQ a:.xloop                             ; Wait for send to complete
;                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
;                test.v  a:REG_RESP v:#h80
;                brch.a  c:%NEQ a:.sloop                             ; Wait for *serial* send to complete
;                
;                move.v  d:REG_RESP v:#h8101 s:#h08
;                orbt.r  d:REG_RESP a:REG_RESP b:REG_DATA            ; Add data
;                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
;                move.v  d:REG_RESP v:#h10005
;                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
;:.yloop         load.o  r:REG_BASE d:REG_RESP
;                test.v  a:REG_RESP v:#h01
;                brch.a  c:%NEQ a:.yloop                             ; Wait for send to complete
;                
;                move.v  d:REG_RESP v:#h8100 s:#h08
;                move.v  d:REG_RESP v:#h0080 o:%TRUE                 ; Data send packet
;                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
;                move.v  d:REG_RESP v:#h10005
;                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
;:.zloop         load.o  r:REG_BASE d:REG_RESP
;                test.v  a:REG_RESP v:#h01
;                brch.a  c:%NEQ a:.zloop                             ; Wait for send to complete

                move.v  d:REG_RESP v:#h011
                push.r  s:REG_RESP
                push.r  s:REG_DATA
                call.s  a:ioc_send
                pops.r  d:REG_DATA
                pops.r  d:REG_RESP
                
                move.v  d:REG_RESP v:#h010
                push.r  s:REG_RESP
                move.v  d:REG_RESP v:#h80
                push.r  s:REG_RESP
                call.s  a:ioc_send
                pops.r  d:REG_DATA
                pops.r  d:REG_RESP
                
                move.v  d:REG_RESP v:#h010
                push.r  s:REG_RESP
:.sloop         call.s  a:ioc_recv
                test.v  a:REG_RESP v:#h80
                brch.a  c:%NEQ a:.sloop
                
                pops.r  d:REG_RESP 
                                
                pops.r  d:REG_BASE
                pops.r  d:REG_DATA
                rtrn.s                                              ; Return from stack
                
!zone   ser_srcv
!def    REG_BASE    %Zw
!def    REG_RESP    %Zz

:ser_srcv       push.r  s:REG_BASE
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS              ; Set up stack
                
                move.v  d:REG_RESP v:#h8010 s:#h08                  ; Enable serial data reception
                move.v  d:REG_RESP v:#h0020 o:%TRUE                 ; Data send packet
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.wloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete
                
                move.v  d:REG_RESP v:#h0010 s:#h08                  ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.xloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.xloop                             ; Wait for send to complete
                                
:.sloop         move.v  d:REG_RESP v:#h0010 s:#h08                  ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.yloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.yloop                             ; Wait for send to complete
                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
                test.v  a:REG_RESP v:#h20
                brch.a  c:%NEQ a:.sloop                             ; Wait for *serial* receive to happen
                
                move.v  d:REG_RESP v:#h0012 s:#h08                  ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.zloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.zloop                             ; Wait for send to complete
                                
:.floop         move.v  d:REG_RESP v:#h0012 s:#h08                  ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.rloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.rloop                             ; Wait for send to complete
                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
                
                pops.r  d:REG_BASE
                rtrn.s                                              ; Return from stack
