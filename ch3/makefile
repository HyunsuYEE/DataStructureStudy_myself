ArrayList.o : ArrayList.h ArrayList.c
	gcc -c ArrayList.c

Point.o : Point.h Point.c
	gcc -c Point.c

PointListMain.o : PointListMain.c Point.h ArrayList.h
	gcc -c PointListMain.c

main : ArrayList.o Point.o PointListMain.o
	gcc ArrayList.o Point.o PointListMain.o -o main
