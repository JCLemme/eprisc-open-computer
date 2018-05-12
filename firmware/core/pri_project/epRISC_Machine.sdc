## Generated SDC file "epRISC_Machine.sdc"

## Copyright (C) 1991-2016 Altera Corporation. All rights reserved.
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and its AMPP partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, the Altera Quartus Prime License Agreement,
## the Altera MegaCore Function License Agreement, or other 
## applicable license agreement, including, without limitation, 
## that your use is for the sole purpose of programming logic 
## devices manufactured by Altera and sold by Altera or its 
## authorized distributors.  Please refer to the applicable 
## agreement for further details.


## VENDOR  "Altera"
## PROGRAM "Quartus Prime"
## VERSION "Version 16.0.0 Build 211 04/27/2016 SJ Lite Edition"

## DATE    "Wed Aug  2 22:56:42 2017"

##
## DEVICE  "10M16SCE144C8G"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {iBoardClock} -period 20.000 -waveform { 0.000 10.000 } [get_ports {iBoardClock}]
create_clock -name {epRISC_sysXMaster:bus|rDerivedClock} -period 1.000 -waveform { 0.000 0.500 } [get_registers {epRISC_sysXMaster:bus|rDerivedClock}]


#**************************************************************
# Create Generated Clock
#**************************************************************

create_generated_clock -name {clock|altpll_component|auto_generated|pll1|clk[0]} -source [get_pins {clock|altpll_component|auto_generated|pll1|inclk[0]}] -duty_cycle 50/1 -multiply_by 4 -divide_by 5 -phase 9/5 -master_clock {iBoardClock} [get_pins {clock|altpll_component|auto_generated|pll1|clk[0]}] 
create_generated_clock -name {clock|altpll_component|auto_generated|pll1|clk[1]} -source [get_pins {clock|altpll_component|auto_generated|pll1|inclk[0]}] -duty_cycle 50/1 -multiply_by 4 -divide_by 5 -phase 45/11 -master_clock {iBoardClock} [get_pins {clock|altpll_component|auto_generated|pll1|clk[1]}] 
create_generated_clock -name {clock|altpll_component|auto_generated|pll1|clk[2]} -source [get_pins {clock|altpll_component|auto_generated|pll1|inclk[0]}] -duty_cycle 50/1 -multiply_by 2 -phase 45/11 -master_clock {iBoardClock} [get_pins {clock|altpll_component|auto_generated|pll1|clk[2]}] 


#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************

set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -setup 0.160  
set_clock_uncertainty -rise_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -hold 0.180  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -setup 0.160  
set_clock_uncertainty -fall_from [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -hold 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -rise_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -setup 0.180  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {epRISC_sysXMaster:bus|rDerivedClock}] -hold 0.160  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[2]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[1]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -rise_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  
set_clock_uncertainty -fall_from [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}] -fall_to [get_clocks {clock|altpll_component|auto_generated|pll1|clk[0]}]  0.070  


#**************************************************************
# Set Input Delay
#**************************************************************



#**************************************************************
# Set Output Delay
#**************************************************************



#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

