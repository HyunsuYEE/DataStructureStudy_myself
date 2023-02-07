BinaryTree2.o: BinaryTree2.h BinaryTree2.c
	gcc -c BinaryTree2.c

BinaryTreeMain2.o: BinaryTreeMain2.c BinaryTree2.h
	gcc -c BinaryTreeMain2.c

main: BinaryTreeMain2.o BinaryTree2.o
	gcc BinaryTreeMain2.o BinaryTree2.o -o main