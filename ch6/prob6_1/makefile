CLinkedList.o: CLinkedList.h CLinkedList.c
	gcc -c CLinkedList.c


CLLBaseStack.o: CLLBaseStack.h CLLBaseStack.c CLinkedList.h CLinkedList.c
	gcc -c CLLBaseStack.c



CLLBaseStackMain.o: CLLBaseStack.h CLLBaseStackMain.c
	gcc -c CLLBaseStackMain.c

main: CLLBaseStack.o CLLBaseStackMain.o CLinkedList.o
	gcc CLLBaseStack.o CLLBaseStackMain.o CLinkedList.o -o main