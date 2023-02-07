ListBaseStack.o: ListBaseStack.h ListBaseStack.c
	gcc -c ListBaseStack.c

BinaryTree2.o: BinaryTree2.c BinaryTree2.h
	gcc -c BinaryTree2.c
ExpressionTree.o: ExpressionTree.c ExpressionTree.h ListBaseStack.h BinaryTree2.h
	gcc -c ExpressionTree.c

ExpressionMain.o: ExpressionMain.c ListBaseStack.h BinaryTree2.h ExpressionTree.h
	gcc -c ExpressionMain.c

main: ExpressionMain.o ListBaseStack.o BinaryTree2.o ExpressionTree.o
	gcc ExpressionMain.o ListBaseStack.o BinaryTree2.o ExpressionTree.o -o main


