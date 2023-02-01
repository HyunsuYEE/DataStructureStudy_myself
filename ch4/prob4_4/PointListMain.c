#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"
int WhoIsPrecede(Point* d1, Point* d2)
{ // 1�̸� ����, 0�̸� �����.(insert�� �ϴ� ������ 0)
	if(d1->xpos < d2->xpos) return 0;    // d1�� ���� ������ �ռ���.
	else if(d1->xpos == d2->xpos){
		if(d1->ypos < d2->ypos){ return 0;}
		else{return 1;}

	}
	else return 1;
		    // d2�� ���� ������ �ռ��ų� ����.
}

int main(void)
{
	List list;
	Point compPos;
	Point * ppos; // ????? ?? ????? int???? ???, ????? ?? ????? ????? ??????? ??? ????. 

	ListInit(&list);
    
	SetSortRule(&list, WhoIsPrecede);

	/*** 4???? ?????? ???? ***/
	ppos = (Point*)malloc(sizeof(Point)); // ???? ??? 
	SetPointPos(ppos, 1, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 1, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 1, 3);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 3);
	LInsert(&list, ppos);

	/*** ??????? ???????? ????? ***/
	printf("������ ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** xpos?? 2?? ????? ?????? ???? ***/
	
	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 1, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 5, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 0, 2);
	LInsert(&list, ppos);

	/*** ???? ?? ???? ?????? ??? ????? ***/
	printf("������ ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}