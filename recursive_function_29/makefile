# Makefile syntax

# target: pre-requisits
# "tab" operation to generate pre-requisits

# -c factorial.c   "this will create object file *.o, which can be linked to other object files to create an executable"
# -o factorial     "this will create output file, executable file"

# but makefile is intelligent enough to just build the target if the file is in same dir, 
# makefile use implicit rule to make that target.
CC = g++ -g
objects = factorial virahanka practice00 practice01

default: $(objects)

%: %.cpp
	$(CC) $^ -o $@

clean:
	rm $(objects)
