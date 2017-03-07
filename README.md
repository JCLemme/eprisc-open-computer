# epRISC Open Computer
An open-source computer

Everything here is a work in progress. Feel free to contact me for more info.
For updates, check https://hackaday.io/project/15691-eprisc-open-computer

---

## Building things
Right now, the CPU testbench and the assembler can be compiled. Just run the provided Makefiles in their respective directories.

To build the CPU testbench, you'll need make, Icarus Verilog, and ideally some sort of waveform viewer (like GTKWave).

To build spasm, you'll need g++, make, and libboost. 

## Running on hardware
A Quartus project is provided in the firmware/core directory to run the CPU and its peripherals on an Altera MAX 10 FPGA. You should be able, with little modification, to get the project to synthesize to another Altera FPGA or to another manufacturer's FPGA.


