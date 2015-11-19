objects = main.o


# name a variable sources for all source files

sources = main.cpp

# now give target as lab1 with objects as variable dependencies + command line

all: $(objects) 
	g++ -o main $(objects)

# list the dependencies for object files - those header files which help build objects

main.o: Factory.h 

# how to build all object files from all dependent source files


$(objects): $(sources)
	g++ -std=c++11 -c $(sources)

clean:
	rm $(objects) main

