#include "CLinkedList.h"

typedef int Data;
typedef struct _listStack{

    List* plist;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data Speek(Stack* pstack);

