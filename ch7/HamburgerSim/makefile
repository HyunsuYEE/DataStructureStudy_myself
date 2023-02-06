CircularQueue.o: CircularQueue.c CircularQueue.h
	gcc -c CircularQueue.c

HamburgerSim.o : HamburgerSim.c CircularQueue.h
	gcc -c HamburgerSim.c

main: HamburgerSim.o CircularQueue.o 
	gcc HamburgerSim.o CircularQueue.o -o main