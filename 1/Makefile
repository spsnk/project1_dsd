all:	main babilon

main:	babilon main.cpp
	g++ babilon.o main.cpp -o main
babilon: 	babilon.h babilon.cpp
	g++ -c babilon.cpp
clean:
	rm -f *.o main