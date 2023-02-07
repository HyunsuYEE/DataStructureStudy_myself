BinaryTree.o: BinaryTree.h BinaryTree.c
	gcc -c BinaryTree.c

BinaryTreeTraverseMain.o: BinaryTreeTraverseMain.c BinaryTree.h
	gcc -c BinaryTreeTraverseMain.c

main: BinaryTree.o BinaryTreeTraverseMain.o
	gcc BinaryTree.o BinaryTreeTraverseMain.o -o main