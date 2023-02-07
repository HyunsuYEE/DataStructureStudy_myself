#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree2.h"

BTreeNode * MakeBTreeNode(void)
{
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));

	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

BTData GetData(BTreeNode * bt)
{
	return bt->data;
}

void SetData(BTreeNode * bt, BTData data)
{
	bt->data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt)
{
	return bt->left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub)
{
	if(main->left != NULL)
		free(main->left);

	main->left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub)
{
	if(main->right != NULL)
		free(main->right);

	main->right = sub;
}

void PreorderTraverse(BTreeNode * bt, VisitFuncPtr action, int* sum)
{
	if(bt == NULL)
		return;

	action(bt->data, sum);
	PreorderTraverse(bt->left, action, sum);
	PreorderTraverse(bt->right, action, sum);
}

void InorderTraverse(BTreeNode * bt, VisitFuncPtr action, int* sum)
{
	if(bt == NULL)
		return;

	InorderTraverse(bt->left, action, sum);
	action(bt->data, sum);
	InorderTraverse(bt->right, action, sum);
}

void PostorderTraverse(BTreeNode * bt, VisitFuncPtr action, int* sum)
{
	if(bt == NULL)
		return;

	PostorderTraverse(bt->left, action, sum);
	PostorderTraverse(bt->right, action, sum);
	action(bt->data, sum);
}
