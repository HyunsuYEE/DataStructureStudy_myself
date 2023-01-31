#include <stdio.h>
#include "NameCard.h"
#include "string.h"
// NameCard ����ü ������ ���� �Ҵ� �� �ʱ�ȭ �� �ּ� �� ��ȯ
NameCard * MakeNameCard(char * name, char * phone){
    NameCard* NC = (NameCard*)malloc(sizeof(NameCard));

    strcpy(NC->name, name);    // ���ڿ��� ���ڷ� �ް�, ����ü ����� �����Ϸ��� strcpy�� ����Ѵٴ�
    strcpy(NC->phone, phone);
    



    return NC;
}
   
// NameCard ����ü ������ ���� ���
void ShowNameCardInfo(NameCard * pcard){
    printf("%s \n", pcard->name);
    printf("%s \n", pcard->phone);
}
   
// �̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
int NameCompare(NameCard * pcard, char * name){
    int comp = 0;
    for(int i=0; i<strlen(pcard->name); i++){
        if(pcard->name[i] != name[i]) comp = -1;
    }
    return comp;
}
   
// ��ȭ��ȣ ������ ����
void ChangePhoneNum(NameCard * pcard, char * phone){
    printf("��ȭ��ȣ�� �ٲٰڽ��ϴ�. %s -> %s \n",pcard->phone, phone);
    strcpy(pcard->phone, phone);
}