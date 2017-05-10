CC=g++
CFLAGS = -g --std=c++11 -O3
LFLAGS = -lncurses

VC=verilator
VFLAGS= -cc -O3

EXENAME=../mach_emu

VOBJ = 	epRISCv4_core.v \
		epRISCv4_gpr.v \
		epRISCv4_defs.v 

COBJ =	mach_emu.cpp

#Main targets
all: 
	make --check-symlink-times rest
    
rest:
	verilator -cc -o $(EXENAME) $(VOBJ) --exe $(COBJ) -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LFLAGS)" $(VFLAGS)
	cd obj_dir && make -f VepRISCv4_core.mk
	
