; epRISC development platform - BIOS I/O controller control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines command the onboard I/O controller over the bus at the highest speed. Will be retooled later.

!zone   ioc_init
!def    REG_BASE    %Zw
!def    REG_RESP    %Zz

:ioc_init       push.r  s:REG_BASE
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS
                move.v  d:REG_RESP v:#h10001
                stor.o  r:REG_BASE s:REG_RESP
                noop.i
                noop.i
                noop.i
                noop.i                                              ; Reset the I/O controller
:.wloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete

:.tloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h02
                brch.a  c:%NEQ a:.tloop                             ; Wait for send to complete
;halt.i
                pops.r  d:REG_BASE
                rtrn.s                                              ; Return from stack
        
        
!zone   ioc_send
!def    REG_BASE    %Zw
!def    REG_DATA    %Zx
!def    REG_ADDR    %Zy
!def    REG_RESP    %Zz
            
:ioc_send       push.r  s:REG_ADDR
                push.r  s:REG_DATA
                push.r  s:REG_BASE
                subr.v  d:%SP a:%SP v:#h04
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS
                pops.r  d:REG_DATA
                pops.r  d:REG_ADDR                                  
                addr.v  d:%SP a:%SP v:#h06                          ; Set up the stack
                
                move.v  d:REG_RESP v:#h8 s:#h06
                orbt.r  d:REG_RESP a:REG_RESP b:REG_ADDR
                arsl.v  d:REG_RESP a:REG_RESP v:#h10                ; Form write packet at address
                orbt.r  d:REG_RESP a:REG_RESP b:REG_DATA            ; Add data
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
                
:.wloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete

:.tloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h02
                brch.a  c:%NEQ a:.tloop                             ; Wait for send to complete
                                
                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
                
                pops.r  d:REG_BASE
                pops.r  d:REG_DATA
                pops.r  d:REG_ADDR                                  ; Restore registers
                rtrn.s                                              ; Return from stack
                
                                
!zone   ioc_recv
!def    REG_BASE    %Zw
!def    REG_DATA    %Zx
!def    REG_ADDR    %Zy
!def    REG_RESP    %Zz
                
:ioc_recv       push.r  s:REG_ADDR
                push.r  s:REG_BASE
                subr.v  d:%SP a:%SP v:#h03
                move.v  d:REG_BASE v:#BUS_BASE_ADDRESS
                pops.r  d:REG_ADDR                                  
                addr.v  d:%SP a:%SP v:#h04                          ; Set up the stack
                
                move.v  d:REG_RESP v:#h00 s:#h06
                orbt.r  d:REG_RESP a:REG_RESP b:REG_ADDR
                arsl.v  d:REG_RESP a:REG_RESP v:#h10                ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.wloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.wloop                             ; Wait for send to complete
           
:.tloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h02
                brch.a  c:%NEQ a:.tloop                             ; Wait for send to complete
                
                move.v  d:REG_RESP v:#h00 s:#h06
                orbt.r  d:REG_RESP a:REG_RESP b:REG_ADDR
                arsl.v  d:REG_RESP a:REG_RESP v:#h10                ; Form read packet at address
                stor.o  r:REG_BASE s:REG_RESP o:#h01                ; Store packet in send register
                move.v  d:REG_RESP v:#h10005
                stor.o  r:REG_BASE s:REG_RESP                       ; Command send
:.gloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h01
                brch.a  c:%NEQ a:.gloop                             ; Wait for send to complete
                
:.sloop         load.o  r:REG_BASE d:REG_RESP
                test.v  a:REG_RESP v:#h02
                brch.a  c:%NEQ a:.sloop                             ; Wait for send to complete
                
                load.o  r:REG_BASE d:REG_RESP o:#h02                ; Load response into register
                
                pops.r  d:REG_BASE
                pops.r  d:REG_ADDR                                  ; Restore registers
                rtrn.s                                              ; Return from stack
                
