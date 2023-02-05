ListBaseStack.o: ListBaseStack.h ListBaseStack.c
	gcc -c ListBaseStack.c

InfixToPostfix.o: InfixToPostfix.h InfixToPostfix.c ListBaseStack.h
	gcc -c InfixToPostfix.c

PostCalculator.o: PostCalculator.h PostCalculator.c ListBaseStack.h
	gcc -c PostCalculator.c

InfixCalculator.o: InfixCalculator.h InfixToPostfix.h PostCalculator.h InfixCalculator.c
	gcc -c InfixCalculator.c

InfixCalculatorMain.o: InfixCalculatorMain.c InfixCalculator.h
	gcc -c InfixCalculatorMain.c


main: InfixCalculatorMain.o ListBaseStack.o InfixToPostfix.o PostCalculator.o InfixCalculator.o
	gcc InfixCalculatorMain.o InfixCalculator.o InfixToPostfix.o PostCalculator.o ListBaseStack.o  -o main