UsefulHeap.o: UsefulHeap.h UsefulHeap.c
	gcc -c UsefulHeap.c

PriorityQueue.o: PriorityQueue.h PriorityQueue.c UsefulHeap.h
	gcc -c PriorityQueue.c

PriorityQueueMain.o: PriorityQueueMain.c PriorityQueue.h UsefulHeap.h
	gcc -c PriorityQueueMain.c

main: PriorityQueueMain.o UsefulHeap.o PriorityQueue.o
	gcc PriorityQueueMain.o UsefulHeap.o PriorityQueue.o -o main
