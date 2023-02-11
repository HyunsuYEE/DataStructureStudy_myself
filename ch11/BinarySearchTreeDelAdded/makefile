BinaryTree3.o: BinaryTree3.h BinaryTree3.c
	gcc -c BinaryTree3.c

BinarySearchTree2.o: BinarySearchTree2.h BinarySearchTree2.c BinaryTree3.h
	gcc -c BinarySearchTree2.c
BinarySearchTreeDelMain.o: BinarySearchTreeDelMain.c BinarySearchTree2.h BinaryTree3.h
	gcc -c BinarySearchTreeDelMain.c


main: BinarySearchTreeDelMain.o BinarySearchTree2.o BinaryTree3.o
	gcc BinarySearchTreeDelMain.o BinarySearchTree2.o BinaryTree3.o -o main