InfixToPostfix.o: InfixToPostfix.h InfixToPostfix.c ListBaseStack.h
	gcc -c InfixToPostfix.c

ListBaseStack.o: ListBaseStack.h ListBaseStack.c
	gcc -c ListBaseStack.c

InfixToPostfixMain.o: InfixToPostfix.h InfixToPostfix.c
	gcc -c InfixToPostfixMain.c

main: InfixToPostfixMain.o ListBaseStack.o InfixToPostfix.o
	gcc InfixToPostfixMain.o ListBaseStack.o InfixToPostfix.o -o main