BinaryTree2.o: BinaryTree2.h BinaryTree2.c
	gcc -c BinaryTree2.c

BinaryTreeDeleteMain.o: BinaryTreeDeleteMain.c BinaryTree2.h
	gcc -c BinaryTreeDeleteMain.c

main : BinaryTree2.o BinaryTreeDeleteMain.o
	gcc BinaryTree2.o BinaryTreeDeleteMain.o -o main