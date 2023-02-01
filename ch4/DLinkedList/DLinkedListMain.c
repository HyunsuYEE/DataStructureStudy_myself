#include <stdio.h>
#include "DLinkedList.h"

int main(void)
{
	// Listï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½Ê±ï¿½È­ /////////////////////////////
	List list;
	int data;
	ListInit(&list);

	// 5ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ /////////////////////////////
	LInsert(&list, 11);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 22);
	LInsert(&list, 33);

	// ï¿½ï¿½ï¿½ï¿½ï¿? ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ã¼ ï¿½ï¿½ï¿? /////////////////////////
	printf("ÇöÀç µ¥ÀÌÅÍ ¼ö: %d \n", LCount(&list));

	if(LFirst(&list, &data))    // Ã¹ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¸
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))    // ï¿½ï¿½ ï¿½ï¿½Â° ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½È¸
			printf("%d ", data);
	}
	printf("\n\n");

	// ï¿½ï¿½ï¿½ï¿½ 22ï¿½ï¿½ ï¿½Ë»ï¿½ï¿½Ï¿ï¿½ ï¿½ï¿½ï¿? ï¿½ï¿½ï¿½ï¿½ //////////////////////////
	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	// ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ö´ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½Ã¼ ï¿½ï¿½ï¿? ////////////////////////
	printf("ÇöÀç µ¥ÀÌÅÍ ¼ö: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}