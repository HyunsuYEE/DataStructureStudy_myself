Point.o : Point.c Point.h
	gcc -c Point.c


DLinkedList.o : DLinkedList.c DLinkedList.h
	gcc -c DLinkedList.c


PointListMain.o : PointListMain.c DLinkedList.h Point.h
	gcc -c PointListMain.c


main: Point.o DLinkedList.o PointListMain.o
	gcc Point.o DLinkedList.o PointListMain.o -o main