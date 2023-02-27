ALGraphDFS.o: ALGraphDFS.h ALGraphDFS.c DLinkedList.h ArrayBaseStack.h
	gcc -c ALGraphDFS.c

ArrayBaseStack.o : ArrayBaseStack.h ArrayBaseStack.c
	gcc -c ArrayBaseStack.c 

DLinkedList.o : DLinkedList.h DLinkedList.c 
	gcc -c DLinkedList.c

DFSMain.o : DFSMain.c ALGraphDFS.h
	gcc -c DFSMain.c

main: DFSMain.o DLinkedList.o ArrayBaseStack.o ALGraphDFS.o
	gcc DFSMain.o DLinkedList.o ArrayBaseStack.o ALGraphDFS.o -o main