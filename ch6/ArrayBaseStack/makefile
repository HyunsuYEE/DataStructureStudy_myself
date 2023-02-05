ArrayBaseStack.o:ArrayBaseStack.h ArrayBaseStack.c
	gcc -c ArrayBaseStack.c

ArrayBaseStackMain.o: ArrayBaseStack.h ArrayBaseStackMain.c
	gcc -c ArrayBaseStackMain.c

main: ArrayBaseStack.o ArrayBaseStackMain.o
	gcc ArrayBaseStack.o ArrayBaseStackMain.o -o main