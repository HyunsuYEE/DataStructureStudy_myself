#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"
int WhoIsPrecede(Point* d1, Point* d2)
{ // 1이면 다음, 0이면 멈춘다.(insert를 하는 지점은 0)
	if(d1->xpos < d2->xpos) return 0;    // d1이 정렬 순서상 앞선다.
	else if(d1->xpos == d2->xpos){
		if(d1->ypos < d2->ypos){ return 0;}
		else{return 1;}

	}
	else return 1;
		    // d2가 정렬 순서상 앞서거나 같다.
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
	printf("데이터 수: %d \n", LCount(&list));

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
	printf("데이터 수: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}