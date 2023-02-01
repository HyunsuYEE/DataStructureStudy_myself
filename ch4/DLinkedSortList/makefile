DLinkedList.o : DLinkedList.h DLinkedList.c
	gcc -c DLinkedList.c

DLinkedListSortMain.o : DLinkedListSortMain.c DLinkedList.h
	gcc -c DLinkedListSortMain.c

main: DLinkedList.o DLinkedListSortMain.o
	gcc DLinkedList.o DLinkedListSortMain.o -o main