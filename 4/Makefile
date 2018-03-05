all:	main

main: temperature main.cpp
	g++ -o main temperature.o main.cpp
temperature:	temperature.h temperature.cpp
	g++ -c temperature.cpp
clean:
	rm -f *.o main *~
