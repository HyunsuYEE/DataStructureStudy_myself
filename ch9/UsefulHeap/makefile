UsefulHeap.o: UsefulHeap.h UsefulHeap.c
	gcc -c UsefulHeap.c

UsefulHeapMain.o : UsefulHeapMain.c UsefulHeap.h
	gcc -c UsefulHeapMain.c

main : UsefulHeap.o UsefulHeapMain.o
	gcc UsefulHeap.o UsefulHeapMain.o -o main