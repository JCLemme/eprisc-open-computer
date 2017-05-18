; epRISC development platform - BIOS SD card control routines
;
; written by John C. Lemme, jclemme (at) proportionallabs (dot) com
; this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
;
; These routines control the system's two SD cards.


!def    SDC_CARD_A      #h01
!def    SDC_CARD_B      #h02


!def CMD_GO_IDLE_STATE #h00
!def CMD_SEND_OP_COND #h01
!def CMD_SEND_IF_COND #h08
!def CMD_SEND_CSD #h09
!def CMD_SEND_CID #h0a
!def CMD_STOP_TRANSMISSION #h0c
!def CMD_SEND_STATUS #h0d
!def CMD_SET_BLOCKLEN #h10
!def CMD_READ_SINGLE_BLOCK #h11
!def CMD_READ_MULTIPLE_BLOCK #h12
!def CMD_WRITE_SINGLE_BLOCK #h18
!def CMD_WRITE_MULTIPLE_BLOCK #h19
!def CMD_PROGRAM_CSD #h1b
!def CMD_SET_WRITE_PROT #h1c
!def CMD_CLR_WRITE_PROT #h1d
!def CMD_SEND_WRITE_PROT #h1e
!def CMD_TAG_SECTOR_START #h20
!def CMD_TAG_SECTOR_END #h21
!def CMD_UNTAG_SECTOR #h22
!def CMD_TAG_ERASE_GROUP_START #h23
!def CMD_TAG_ERASE_GROUP_END #h24
!def CMD_UNTAG_ERASE_GROUP #h25
!def CMD_ERASE #h26
!def CMD_SD_SEND_OP_COND #h29
!def CMD_LOCK_UNLOCK #h2a
!def CMD_APP #h37
!def CMD_READ_OCR #h3a
!def CMD_CRC_ON_OFF #h3b

!def R1_IDLE_STATE #h00
!def R1_ERASE_RESET #h01
!def R1_ILL_COMMAND #h02
!def R1_COM_CRC_ERR #h03
!def R1_ERASE_SEQ_ERR #h04
!def R1_ADDR_ERR #h05
!def R1_PARAM_ERR #h06

!def R2_CARD_LOCKED #h00
!def R2_WP_ERASE_SKIP #h01
!def R2_ERR #h02
!def R2_CARD_ERR #h03
!def R2_CARD_ECC_FAIL #h04
!def R2_WP_VIOLATION #h05
!def R2_INVAL_ERASE #h06
!def R2_OUT_OF_RANGE #h07
!def R2_CSD_OVERWRITE #h07
!def R2_IDLE_STATE (R1_IDLE_STATE + 8)
!def R2_ERASE_RESET (R1_ERASE_RESET + 8)
!def R2_ILL_COMMAND (R1_ILL_COMMAND + 8)
!def R2_COM_CRC_ERR (R1_COM_CRC_ERR + 8)
!def R2_ERASE_SEQ_ERR (R1_ERASE_SEQ_ERR + 8)
!def R2_ADDR_ERR (R1_ADDR_ERR + 8)
!def R2_PARAM_ERR (R1_PARAM_ERR + 8)

!def R3_OCR_MASK (#hffffffffUL)
!def R3_IDLE_STATE (R1_IDLE_STATE + 32)
!def R3_ERASE_RESET (R1_ERASE_RESET + 32)
!def R3_ILL_COMMAND (R1_ILL_COMMAND + 32)
!def R3_COM_CRC_ERR (R1_COM_CRC_ERR + 32)
!def R3_ERASE_SEQ_ERR (R1_ERASE_SEQ_ERR + 32)
!def R3_ADDR_ERR (R1_ADDR_ERR + 32)
!def R3_PARAM_ERR (R1_PARAM_ERR + 32)

!def DR_STATUS_MASK #h0e
!def DR_STATUS_ACCEPTED #h05
!def DR_STATUS_CRC_ERR #h0a
!def DR_STATUS_WRITE_ERR #h0c

!def SD_RAW_SPEC_1 #h00
!def SD_RAW_SPEC_2 #h01
!def SD_RAW_SPEC_SDHC #h02



!zone   sdc_init
!def    REG_AWORK   %Zw
!def    REG_BWORK   %Zx
!def    REG_CWORK   %Zy
!def    REG_RESP    %Zz

:sdc_init       push.r  s:REG_AWORK
                push.r  s:REG_BWORK
                push.r  s:REG_CWORK                                 ; Save the registers we're clobbering
                
                move.v  d:REG_AWORK v:#h00                    
                push.r  s:REG_AWORK
                call.s  a:spi_addr
                pops.r  d:REG_AWORK                                 ; Disable all SPI devices
                
                ; If SPI clock frequency change is added, enable slow mode here
                
                move.v  d:REG_AWORK v:#h0B
:.startloop     call.s  a:spi_recv
                subr.v  d:REG_AWORK a:REG_AWORK v:#h01              ; Card needs >74 "dead" cycles to start up
                cmpr.v  a:REG_AWORK v:#h00                          ; We're gonna do 88
                brch.a  c:%NEQ a:.startloop                         ; Loop until the card's good
                
                move.v  d:REG_AWORK v:SDC_CARD_A                    
                push.r  s:REG_AWORK
                call.s  a:spi_addr
                pops.r  d:REG_AWORK                                 ; Initialize card A - gonna add selector later
                
                move.v  d:REG_AWORK v:CMD_GO_IDLE_STATE
                push.r  s:REG_AWORK                                 ; Store an R1 command
                move.v  d:REG_AWORK v:#h00
                push.r  s:REG_AWORK                                 ; Trash argument
                move.v  d:REG_BWORK v:#h01
                arsl.v  d:REG_BWORK a:REG_BWORK v:R1_IDLE_STATE     ; Calculate the expected response
                move.v  d:REG_CWORK v:#h00                          ; Clear the counter
                
:.aliveloop     call.s  a:sdc_scmd                                  ; Let's see if the card woke up
                cmpr.r  a:REG_RESP b:REG_BWORK                      ; Did we get the expected response?
                brch.a  c:%EQL a:.itsalive                          ; If so, break   
                addr.v  d:REG_CWORK a:REG_CWORK v:#h01              ; Add to the counter
                cmpr.v  a:REG_CWORK v:#h02 s:#h04                   ; Have we tried for >512 cycles?
                brch.a  c:%EQL a:.deadcard                          ; If so, give up
                brch.a  a:.aliveloop                                ; Loop back to top
                
:.itsalive      pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Restore the stack

                move.v  d:REG_AWORK v:CMD_SEND_IF_COND
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h01AA
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Check for voltage range (3.3v) and test pattern?
                
                move.v  d:REG_BWORK v:#h01
                arsl.v  d:REG_BWORK a:REG_BWORK v:R1_ILL_COMMAND    ; Calculate ill command check byte
                
                test.r  a:REG_RESP b:REG_BWORK                      ; Is the command invalid?
                brch.a  c:%EQL a:.notsdhc                           ; If not, it's an SD1 card
                call.s  a:spi_recv
                call.s  a:spi_recv                                  ; Waste some cycles
                call.s  a:spi_recv                                  ; This one's legit though
                test.v  a:REG_RESP v:#h01                           ; Is the voltage range correct?
                brch.a  c:%EQL a:.deadcard                          ; If not, give up
                call.s  a:spi_recv                                  ; This one's legit too
                cmpr.v  a:REG_RESP v:#haa                           ; Is the test pattern correct?
                brch.a  c:%NEQ a:.deadcard                          ; If not, give up
                move.v  d:REG_CWORK v:#h01
                arsl.v  d:REG_CWORK a:REG_CWORK v:SD_RAW_SPEC_2     ; Set type to SD2
                brch.a  a:.typegood                                 ; Converge


:.notsdhc       move.v  d:REG_AWORK v:CMD_APP
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Send CMD_APP
                
                move.v  d:REG_AWORK v:CMD_SD_SEND_OP_COND           
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Send another one to get the type
                
                move.v  d:REG_CWORK v:#h00                          ; Default type is MMC
                cmpr.r  a:REG_AWORK b:REG_BWORK                     ; Is the command invalid?
                brch.a  c:%NEQ a:.typegood                          ; If it is, it's MMC and we don't need to do anything else
                move.v  d:REG_CWORK v:#h01
                arsl.v  d:REG_CWORK a:REG_CWORK v:SD_RAW_SPEC_1     ; Else, set the type to SD1 and we're out

:.typegood      move.v  d:REG_BWORK v:#h00                          ; Counter for the upcoming loop

:.preploop      test.v  a:REG_CWORK v:#h03                          ; Is this an SD card?
                brch.a  c:%EQL a:.itsmmc                            ; If not, go do some MMC stuff
                
                move.v  d:REG_AWORK v:CMD_APP
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Send CMD_APP
                move.v  d:REG_AWORK v:CMD_SD_SEND_OP_COND           
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00
                test.v  a:REG_CWORK v:#h02                          ; Is it SD2?
                brch.a  c:%EQL a:.prepcard                          ; If not, just send it
                move.v  d:REG_AWORK v:#h4000 s:#h08
:.prepcard      push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Send that last command
                brch.a  a:.prepresp                                 ; Converge
                
:.itsmmc        move.v  d:REG_AWORK v:CMD_SD_SEND_OP_COND
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Just one command thanks
                
:.prepresp      test.v  a:REG_RESP v:#h01                           ; Did we enter the idle state?
                brch.a  c:%EQL a:.prepdone                          ; If so, the card's ready
                
                addr.v  d:REG_BWORK a:REG_BWORK v:#h01              ; Increment the counter
                cmpr.v  a:REG_BWORK v:#h80 s:#h04                   ; Have we tried a few thousand times?
                brch.a  c:%EQL a:.deadcard                          ; If so, give up
                brch.a  a:.preploop                                 ; If not, loop back to top

:.prepdone      test.v  a:REG_CWORK v:#h02                          ; Is it SD2?
                brch.a  c:%EQL a:.finishup                          ; If not, ignore the next block
                move.v  d:REG_AWORK v:CMD_READ_OCR
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h00  
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Send a command
                cmpr.v  a:REG_AWORK v:#h00                          ; Did we get back a zero?
                brch.a  c:%NEQ a:.deadcard                          ; If not, give up
                call.s  a:spi_recv
                test.v  a:REG_RESP v:#h40                           ; Is the argument gonna be h04000000?
                brch.a  c:%EQL a:.sdhcdone                          ; If not, finish here and converge
                move.v  d:REG_AWORK v:#h01
                arsl.v  d:REG_AWORK a:REG_AWORK v:SD_RAW_SPEC_SDHC  
                orbt.r  d:REG_CWORK a:REG_CWORK b:REG_AWORK         ; It's a real honest-to-goodness SDHC card
:.sdhcdone      call.s  a:spi_recv
                call.s  a:spi_recv
                call.s  a:spi_recv                                  ; Ignore the rest of the register
                
:.finishup      move.v  d:REG_AWORK v:CMD_SET_BLOCKLEN
                push.r  s:REG_AWORK
                move.v  d:REG_AWORK v:#h200                     
                push.r  s:REG_AWORK
                call.s  a:sdc_scmd
                pops.r  d:REG_AWORK
                pops.r  d:REG_AWORK                                 ; Set the block size to 512
                cmpr.v  a:REG_RESP v:#h00                           ; Did we get a zero back?
                brch.a  c:%NEQ a:.deadcard                          ; If not, assume failure
                brch.a  a:.livecard
                
:.deadcard      move.v  d:REG_AWORK v:#h00                    
                push.r  s:REG_AWORK
                call.s  a:spi_addr
                pops.r  d:REG_AWORK                                 ; Disable all SPI devices
                move.v  d:REG_RESP v:#hFF                           ; Bad value in register
                brch.a  a:.exitinit

:.livecard      move.v  d:REG_AWORK v:#h00                    
                push.r  s:REG_AWORK
                call.s  a:spi_addr
                pops.r  d:REG_AWORK                                 ; Disable all SPI devices
                move.r  d:REG_RESP s:REG_CWORK                      ; Card type in register
                
                ; If SPI clock frequency change is added, enable fast mode here

:.exitinit      pops.r  d:REG_CWORK
                pops.r  d:REG_BWORK
                pops.r  d:REG_AWORK
                rtrn.s                                              ; And return


!zone   sdc_scmd
!def    REG_COMD    %Zw
!def    REG_ARGM    %Zx
!def    REG_RESP    %Zz

:sdc_scmd       push.r  s:REG_COMD
                push.r  s:REG_ARGM
                subr.v  d:%SP a:%SP v:#h03                          ; Set up the stack
                pops.r  d:REG_ARGM                                  ; Get argument
                pops.r  d:REG_COMD                                  ; Get command
                addr.v  d:%SP a:%SP v:#h05                          ; Set up the stack

                call.s  a:spi_recv                                  ; Kill some clock cycles
               
                orbt.v  d:REG_COMD a:REG_COMD v:#h40             
                push.r  s:REG_COMD
                call.s  a:spi_send
                pops.r  d:REG_COMD                                  ; Send command (with bit 6 set)
                
                push.r  s:REG_COMD              
                move.r  d:REG_COMD s:REG_ARGM                       ; Back up the command - we're borrowing its register
                
                masr.v  d:REG_ARGM a:REG_COMD v:#hFF s:#h0C
                push.r  s:REG_ARGM
                call.s  a:spi_send 
                pops.r  d:REG_ARGM
                
                masr.v  d:REG_ARGM a:REG_COMD v:#hFF s:#h08
                push.r  s:REG_ARGM
                call.s  a:spi_send
                pops.r  d:REG_ARGM
                
                masr.v  d:REG_ARGM a:REG_COMD v:#hFF s:#h04
                push.r  s:REG_ARGM
                call.s  a:spi_send
                pops.r  d:REG_ARGM
                
                masr.v  d:REG_ARGM a:REG_COMD v:#hFF s:#h00
                push.r  s:REG_ARGM
                call.s  a:spi_send
                pops.r  d:REG_ARGM                                  ; Send argument (MSB first)
                
                pops.r  d:REG_COMD                                  ; Restore command
                
                cmpr.v  a:REG_COMD v:CMD_GO_IDLE_STATE              ; Is this R1?
                brch.a  c:%NEQ a:.notgoid                           ; If not, loop down a few
                move.v  d:REG_ARGM v:#h95       
                brch.a  a:.sendcrc                                  ; Converge
:.notgoid       cmpr.v  a:REG_COMD v:CMD_SEND_IF_COND               ; Is this conditional?
                brch.a  c:%NEQ a:.notcond                           ; If not, loop down a few
                move.v  d:REG_ARGM v:#h87       
                brch.a  a:.sendcrc                                  ; Converge
:.notcond       move.v  d:REG_ARGM v:#hFF                           ; Else, send garbage

:.sendcrc       push.r  s:REG_ARGM
                call.s  a:spi_send
                pops.r  d:REG_ARGM                                  ; Send the CRC checksum for the command 
    
                move.v  d:REG_ARGM v:#h0A
:.resploop      call.s  a:spi_recv
                cmpr.v  a:REG_RESP v:#hFF
                brch.a  c:%NEQ a:.exitloop
                subr.v  d:REG_ARGM a:REG_ARGM v:#h01
                cmpr.v  a:REG_ARGM v:#h00
                brch.a  c:%EQL a:.exitloop
                brch.a  a:.resploop                                 ; Wait ten cycles for a response

:.exitloop      pops.r  d:REG_ARGM
                pops.r  d:REG_COMD
                rtrn.s                                              ; And return

