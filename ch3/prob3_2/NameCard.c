#include <stdio.h>
#include "NameCard.h"
#include "string.h"
// NameCard 구조체 변수의 동적 할당 및 초기화 후 주소 값 반환
NameCard * MakeNameCard(char * name, char * phone){
    NameCard* NC = (NameCard*)malloc(sizeof(NameCard));

    strcpy(NC->name, name);    // 문자열을 인자로 받고, 구조체 멤버로 복사하려면 strcpy를 써야한다능
    strcpy(NC->phone, phone);
    



    return NC;
}
   
// NameCard 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard * pcard){
    printf("%s \n", pcard->name);
    printf("%s \n", pcard->phone);
}
   
// 이름이 같으면 0, 다르면 0이 아닌 값 반환
int NameCompare(NameCard * pcard, char * name){
    int comp = 0;
    for(int i=0; i<strlen(pcard->name); i++){
        if(pcard->name[i] != name[i]) comp = -1;
    }
    return comp;
}
   
// 전화번호 정보를 변경
void ChangePhoneNum(NameCard * pcard, char * phone){
    printf("전화번호를 바꾸겠습니다. %s -> %s \n",pcard->phone, phone);
    strcpy(pcard->phone, phone);
}