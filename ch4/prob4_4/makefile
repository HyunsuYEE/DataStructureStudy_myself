DLinkedList.o : DLinkedList.h DLinkedList.c
	gcc -c DLinkedList.c
Point.o: Point.h Point.c
	gcc -c Point.c

PointListMain.o: PointListMain.c Point.h DLinkedList.h
	gcc -c PointListMain.c
main: PointListMain.o Point.o DLinkedList.o
	gcc PointListMain.o Point.o DLinkedList.o -o main