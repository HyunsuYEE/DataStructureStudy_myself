#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int main(void)
{
	List list;
	Point compPos;
	Point * ppos; // ï¿½Æ±ï¿½ï¿? ï¿½ï¿½ ï¿½Ú¸ï¿½ï¿½ï¿½ intï¿½ï¿½ï¿½ï¿½ ï¿½Ý¸é¿¡, ï¿½Ì¹ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½Ú¸ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½Ã¼ ï¿½ï¿½ï¿½ï¿½ï¿½Í·ï¿½ ï¿½Ç¾ï¿½ ï¿½ï¿½ï¿½ï¿½. 

	ListInit(&list);

	/*** 4ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ***/
	ppos = (Point*)malloc(sizeof(Point)); // ï¿½ï¿½ï¿½ï¿½ ï¿½Ò´ï¿½ 
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	/*** ï¿½ï¿½ï¿½ï¿½ï¿?? ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿?? ***/
	printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** xposï¿½ï¿½ 2ï¿½ï¿½ ï¿½ï¿½ï¿?? ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ***/
	compPos.xpos=500;
	compPos.ypos=1;
	
	if(LFirst(&list, &ppos))
	{
		if(PointComp(ppos, &compPos) == 2) // y¸¸ °°À» °æ¿ì
		{
			ppos=LRemove(&list);
			free(ppos);
		}
		
		while(LNext(&list, &ppos)) 
		{
			if(PointComp(ppos, &compPos) == 2) // y¸¸ °°À» °æ¿ì
			{
				ppos=LRemove(&list);
				free(ppos);
			}
		}
	}

	/*** ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ã¼ ï¿½ï¿½ï¿?? ***/
	printf("ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}