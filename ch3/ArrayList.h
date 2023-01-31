#include "Point.h"

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

/*** ArrayList�� ���� ****/
#define LIST_LEN 100

typedef Point* LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN]; // �̰� �� �߿��ѵ�. �ᱹ�� Point* arr[100]�̴ϱ�, 100���� ����ü Point�� �����͸� ��� �迭.?
	int numOfData;
	int curPosition;
} List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif