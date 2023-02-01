DLinkedList.o: DLinkedList.c DLinkedList.h
	gcc -c DLinkedList.c

DLinkedListMain.o: DLinkedListMain.c DLinkedList.o
	gcc -c DLinkedListMain.c

main: DLinkedList.o DLinkedListMain.o
	gcc DLinkedList.o DLinkedListMain.o -o main