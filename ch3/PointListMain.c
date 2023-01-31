#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(void)
{
	List list;
	Point compPos;
	Point * ppos; // ¾Æ±î´Â ÀÌ ÀÚ¸®°¡ int¿´´ø ¹Ý¸é¿¡, ÀÌ¹ø¿£ ÀÌ ÀÚ¸®°¡ ±¸Á¶Ã¼ Æ÷ÀÎÅÍ·Î µÇ¾î ÀÖÀ½. 

	ListInit(&list);

	/*** 4ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ***/
	ppos = (Point*)malloc(sizeof(Point)); // µ¿Àû ÇÒ´ç 
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

	/*** ï¿½ï¿½ï¿½ï¿½ï¿? ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿? ***/
	printf("ÇöÀç µ¥ÀÌÅÍ ¼ö: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** xposï¿½ï¿½ 2ï¿½ï¿½ ï¿½ï¿½ï¿? ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ***/
	compPos.xpos=500;
	compPos.ypos=1;
	
	if(LFirst(&list, &ppos))
	{
		if(PointComp(ppos, &compPos) == 2)
		{
			ppos=LRemove(&list);
			free(ppos);
		}
		
		while(LNext(&list, &ppos)) 
		{
			if(PointComp(ppos, &compPos) == 2)
			{
				ppos=LRemove(&list);
				free(ppos);
			}
		}
	}

	/*** ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ã¼ ï¿½ï¿½ï¿? ***/
	printf("ÇöÀç µ¥ÀÌÅÍ ¼ö: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}