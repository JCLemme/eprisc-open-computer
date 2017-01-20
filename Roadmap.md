# Things to do

## ISA
    * Finish defining advanced interrupt controller 
    * Define single-step/breakpoint unit
    
## Machine (Primary)
    * Define machine memory map
    * Write machine file
    * Write supporting I/O for machine file (mainly synchronous RAM/ROM)
    * Write machine testbench
    * Finish defining sysX
    * Write sysX master controller
    * Write sysX slave test unit (for testbench)

## I/O Controller (Auxiliary)
    * Write sysX slave controller
    * Write I/O controller core
    * Merge I/O controller into machine testbench
    * Write UART
    * Integrate UART into I/O controller

## Toolchain
    * Finish assembly format spec
    * Finish instruction set spec
    * Add !str, !pstr to spasm
    * Change !pc to !ip
    * Write ISA v5 core file
    * Retarget spasm to ISA v5 (general)
