ListBaseQueue.o: ListBaseQueue.h ListBaseQueue.c
	gcc -c ListBaseQueue.c

RadixSort.o : RadixSort.c ListBaseQueue.h
	gcc -c RadixSort.c

main: ListBaseQueue.o RadixSort.o
	gcc ListBaseQueue.o RadixSort.o -o main