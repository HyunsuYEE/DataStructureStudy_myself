ListBaseStack.o: ListBaseStack.h ListBaseStack.c
	gcc -c ListBaseStack.c

PostCalculator.o: PostCalculator.h PostCalculator.c ListBaseStack.h
	gcc -c PostCalculator.c

PostCalculatorMain.o: PostCalculatorMain.c PostCalculator.h
	gcc -c PostCalculatorMain.c

main: ListBaseStack.o PostCalculator.o PostCalculatorMain.o
	gcc ListBaseStack.o PostCalculator.o PostCalculatorMain.o -o main