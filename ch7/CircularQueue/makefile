CircularQueue.o: CircularQueue.h CircularQueue.c
	gcc -c CircularQueue.c

CircularQueueMain.o : CircularQueueMain.c CircularQueue.h
	gcc -c CircularQueueMain.c

main: CircularQueue.o CircularQueueMain.o
	gcc CircularQueue.o CircularQueueMain.o -o main	