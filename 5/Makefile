all: main

main:	fraction main.cpp
	g++ -o main main.cpp fraction.o
fraction:	fraction.h fraction.cpp
	g++ -c fraction.cpp
clean:
	rm -f *.o main *~
