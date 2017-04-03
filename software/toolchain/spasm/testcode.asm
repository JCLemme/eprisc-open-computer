!ip     h00000000
!zone   main

!def    REG_BASE    %Xw
!def    REG_SDAT    %Xx
!def    REG_COMD    %Xz
!def    REG_SCAN    %Xy

:entry  move.v  d:%XW v:#h200
        move.v  d:%XZ v:#h10001
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i                                  ; Reset the I/O controller
        
:mloop  move.v  d:%XX s:#h08 v:#h8100
        move.v  d:%XX v:#h20 o:%TRUE
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i                                  ; Enable serial input
        
:.slop  move.v  d:%XX s:#h08 v:#h0100
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i                                  ; Request read of the UART's config register
        move.v  d:%XX s:#h08 v:#h0100
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i
      
        load.o  d:REG_SCAN r:REG_BASE o:#h02    ; Grab the received word
        test.v  a:REG_SCAN v:#h20
        brch.a  c:%NEQ a:.slop                  ; Loop back around if no character was received
        
        move.v  d:%XX s:#h08 v:#h0102
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i                                  ; Request read of the UART's input register
        move.v  d:%XX s:#h08 v:#h0102
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i
        
        load.o  d:REG_SCAN r:REG_BASE o:#h02    ; Grab the inputted character
        move.v  d:%XX s:#h08 v:#h8101
        orbt.r  d:REG_SDAT a:REG_SDAT b:REG_SCAN
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i
        move.v  d:%XX s:#h08 v:#h8100
        move.v  d:%XX v:#h80 o:%TRUE
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ                     ; Send serial character
        noop.i
        noop.i
        noop.i
        noop.i  
:.plop  move.v  d:%XX s:#h08 v:#h0100
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ
        noop.i
        noop.i
        noop.i
        noop.i                                  ; Request read of the UART's config register
        move.v  d:%XX s:#h08 v:#h0100
        stor.o  r:%XW s:%XX o:#h01
        move.v  d:%XZ v:#h10005
        stor.o  r:%XW s:%XZ  
        noop.i
        noop.i
        noop.i
        noop.i
      
        load.o  d:REG_SCAN r:REG_BASE o:#h02    ; Grab the received word
        test.v  a:REG_SCAN v:#h80
        brch.a  c:%NEQ a:.plop                  ; Loop back around if still sending                               
        
        brch.a  a:mloop                         ; Loop back up
        

