SimpleHeap.o : SimpleHeap.h SimpleHeap.c
	gcc -c SimpleHeap.c

SimpleHeapMain.o : SimpleHeapMain.c SimpleHeap.h
	gcc -c SimpleHeapMain.c

main: SimpleHeap.o SimpleHeapMain.o
	gcc SimpleHeap.o SimpleHeapMain.o -o main