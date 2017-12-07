gaspump: main.o gaspump.o
	g++ main.o gaspump.o -o gaspump

main.o: main.cpp
	g++ -c main.cpp

gaspump.o: gaspump.cpp
	g++ -c gaspump.cpp

clean:
	rm *.o gaspump
