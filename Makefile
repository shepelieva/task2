fibonacci.o:	fibonacci.cpp recursion.h 
		g++ -g -Wall -c fibonacci.cpp -o fibonacci.o
fibonacci:	fibonacci.o
		g++ -Wall -g fibonacci.o -o fibonacci
