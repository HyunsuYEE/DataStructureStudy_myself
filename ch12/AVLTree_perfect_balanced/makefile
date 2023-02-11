BinaryTree3.o : BinaryTree3.h BinaryTree3.c
	gcc -c BinaryTree3.c

AVLRebalance.o : AVLRebalance.h AVLRebalance.c BinaryTree3.h
	gcc -c AVLRebalance.c

BinarySearchTree3.o: BinarySearchTree3.h BinarySearchTree3.c AVLRebalance.h BinaryTree3.h
	gcc -c BinarySearchTree3.c

AVLTreeMain.o : AVLTreeMain.c BinarySearchTree3.h BinaryTree3.h
	gcc -c AVLTreeMain.c

main: AVLTreeMain.o BinaryTree3.o AVLRebalance.o BinarySearchTree3.o 
	gcc AVLTreeMain.o BinaryTree3.o AVLRebalance.o BinarySearchTree3.o -o main