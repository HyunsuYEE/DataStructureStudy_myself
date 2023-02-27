DLinkedList.o: DLinkedList.h DLinkedList.c Slot2.h
	gcc -c DLinkedList.c

Person.o : Person.h Person.c 
	gcc -c Person.c

Table2.o : Table2.h Table2.c DLinkedList.h Slot2.h
	gcc -c Table2.c

ChainedTableMain.o : ChainedTableMain.c Table2.h Person.h
	gcc -c ChainedTableMain.c

main : ChainedTableMain.o Table2.o Person.o DLinkedList.o
	gcc ChainedTableMain.o Table2.o Person.o DLinkedList.o -o main