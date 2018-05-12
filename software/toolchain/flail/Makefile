CC=g++
CFLAGS = -g --std=c++11 -O3
LFLAGS = -lncurses

VC=verilator
VFLAGS= -cc -O3 -Wno-lint -Wno-REDEFMACRO --trace

EXENAME=flail

VOBJ = 	../../../firmware/testbench/coreemu_v5r1.v \
		../../../firmware/testbench/testmem_v1r0.v \
		../../../firmware/core/machine_v1r0.v \
		../../../firmware/core/core_v5r0.v \
		../../../firmware/core/rom_v1r0.v \
		../../../firmware/core/sysx_v1r0.v \
		../../../firmware/io/controller_v1r0.v \
		../../../firmware/io/gpio_v1r0.v \
		../../../firmware/io/spi_v1r0.v \
		../../../firmware/io/uart_v1r0.v \
		../../../firmware/io/video_v1r0.v 
		
COBJ =	flail.cpp

#Main targets
all: 
	make --check-symlink-times rest
    
rest:
	verilator -cc -o ../$(EXENAME) $(VOBJ) --top-module epRISC_coreEmu --exe $(COBJ) -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LFLAGS)" $(VFLAGS)
	cd obj_dir && make -f VepRISC_coreEmu.mk

clean:
	rm obj_dir/* && rm EXENAME
