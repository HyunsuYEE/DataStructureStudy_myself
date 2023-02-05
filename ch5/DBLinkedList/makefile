DBLinkedList.o: DBLinkedList.h DBLinkedList.c
	gcc -c DBLinkedList.c

DBLinkedListMain.o: DBLinkedList.h DBLinkedListMain.c
	gcc -c DBLinkedListMain.c

main: DBLinkedList.o DBLinkedListMain.o
	gcc DBLinkedList.o DBLinkedListMain.o -o main
