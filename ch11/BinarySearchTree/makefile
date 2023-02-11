BinaryTree2.o : BinaryTree2.h BinaryTree2.c
	gcc -c BinaryTree2.c

BinarySearchTree.o : BinarySearchTree.h BinarySearchTree.c BinaryTree2.h
	gcc -c BinarySearchTree.c

BinarySearchTreeMain.o :BinarySearchTreeMain.c BinarySearchTree.h BinaryTree2.h
	gcc -c BinarySearchTreeMain.c

main: BinarySearchTreeMain.o BinarySearchTree.o BinaryTree2.o
	gcc BinarySearchTreeMain.o BinarySearchTree.o BinaryTree2.o -o main