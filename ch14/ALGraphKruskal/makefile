UsefulHeap.o : UsefulHeap.h UsefulHeap.c ALEdge.h
	gcc -c UsefulHeap.c

PriorityQueue.o : PriorityQueue.h PriorityQueue.c UsefulHeap.h
	gcc -c PriorityQueue.c

DLinkedList.o: DLinkedList.h DLinkedList.c
	gcc -c DLinkedList.c

ArrayBaseStack.o: ArrayBaseStack.h ArrayBaseStack.c
	gcc -c ArrayBaseStack.c

ALGraphKruskal.o : ALGraphKruskal.h ALGraphKruskal.c PriorityQueue.h DLinkedList.h ArrayBaseStack.h
	gcc -c ALGraphKruskal.c

KruskalMain.o: KruskalMain.c ALGraphKruskal.h
	gcc -c KruskalMain.c

main: KruskalMain.o ALGraphKruskal.o ArrayBaseStack.o DLinkedList.o PriorityQueue.o UsefulHeap.o
	gcc KruskalMain.o ALGraphKruskal.o ArrayBaseStack.o DLinkedList.o PriorityQueue.o UsefulHeap.o -o main