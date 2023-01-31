#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(){
    List list;
    NameCard* NC;

    ListInit(&list);
    
    LInsert(&list,MakeNameCard("hyunsu","01076654342"));
    LInsert(&list,MakeNameCard("minsu","01035265727"));
    LInsert(&list,MakeNameCard("mom","01076550509"));
    LInsert(&list,MakeNameCard("mr.kk","01077774423"));

    if(LFirst(&list, &NC)) {
        ShowNameCardInfo(NC);
    while(LNext(&list, &NC)) ShowNameCardInfo(NC);
    }
    printf("\n");

    if(LFirst(&list, &NC)){ // minsu�� ���� �̸��� ��ȭ��ȣ�� ����Ѵ�. 
        if(NameCompare(NC, "minsu") == 0){ShowNameCardInfo(NC);}
        while(LNext(&list, &NC)){
            if(NameCompare(NC, "minsu") == 0){ShowNameCardInfo(NC);}
        }
    }
    printf("\n");

    if(LFirst(&list, &NC)){  // mom�� ��ȭ��ȣ�� �ٲ۴�! ����? 01012345678
        if(NameCompare(NC, "mom") == 0){ChangePhoneNum(NC,"01012345678");}
        while(LNext(&list, &NC)){
            if(NameCompare(NC, "mom") == 0){ChangePhoneNum(NC,"01012345678");}
    }
    }
    printf("\n");

    if(LFirst(&list, &NC)){ //mr.kk�� �׳� ��������!
        if(NameCompare(NC, "mr.kk") == 0){
            NC = LRemove(&list);
            free(NC);}
        while(LNext(&list, &NC)){
            if(NameCompare(NC, "mr.kk") == 0){
            NC = LRemove(&list);
            free(NC);}
        }
    }
    printf("\n");

    
    if(LFirst(&list, &NC)) {
        ShowNameCardInfo(NC);
    while(LNext(&list, &NC)) ShowNameCardInfo(NC);
    }
    printf("\n");
    

}