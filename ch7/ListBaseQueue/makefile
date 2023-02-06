ListBaseQueue.o:ListBaseQueue.h ListBaseQueue.c
	gcc -c ListBaseQueue.c

ListBaseQueueMain.o : ListBaseQueueMain.c ListBaseQueue.h
	gcc -c ListBaseQueueMain.c

main: ListBaseQueue.o ListBaseQueueMain.o
	gcc ListBaseQueue.o ListBaseQueueMain.o -o main