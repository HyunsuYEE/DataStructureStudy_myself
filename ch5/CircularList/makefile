CLinkedList.o: CLinkedList.c CLinkedList.h
	gcc -c CLinkedList.c

CLinkedListMain.o : CLinkedListMain.c CLinkedList.h 
	gcc -c CLinkedListMain.c

main: CLinkedList.o CLinkedListMain.o
	gcc CLinkedList.o CLinkedListMain.o -o main