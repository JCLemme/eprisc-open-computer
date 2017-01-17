CC=g++
CFLAGS= -g --std=c++11

EXENAME=spasm
DEVNAME=spasm-dev

OBJPATH=obj
SRCPATH=src

SRCFORM=$(SRCPATH)/%.cpp
OBJFORM=$(OBJPATH)/%.o

FILES=$(patsubst $(SRCPATH)/%.cpp, %, $(wildcard $(SRCPATH)/*.cpp))

#Main targets
all: $(patsubst %, $(OBJFORM), $(FILES))
	$(CC) -o $(EXENAME) $(patsubst %, $(OBJPATH)/%.o, $(FILES)) $(CFLAGS) 
	
devel: $(patsubst %, $(OBJFORM), $(FILES))
	$(CC) -g -o $(DEVNAME) $(patsubst %, $(OBJPATH)/%.o, $(FILES)) $(CFLAGS) 

print-%  : ; @echo $* = $($*)

#Objects
$(OBJFORM): $(SRCFORM)
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(EXENAME) 
	rm -f $(DEVNAME)
	rm -f $(OBJPATH)/*.o
