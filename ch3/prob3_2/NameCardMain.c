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

    if(LFirst(&list, &NC)){ // minsu는 그저 이름과 전화번호를 출력한다. 
        if(NameCompare(NC, "minsu") == 0){ShowNameCardInfo(NC);}
        while(LNext(&list, &NC)){
            if(NameCompare(NC, "minsu") == 0){ShowNameCardInfo(NC);}
        }
    }
    printf("\n");

    if(LFirst(&list, &NC)){  // mom은 전화번호를 바꾼다! 뭐로? 01012345678
        if(NameCompare(NC, "mom") == 0){ChangePhoneNum(NC,"01012345678");}
        while(LNext(&list, &NC)){
            if(NameCompare(NC, "mom") == 0){ChangePhoneNum(NC,"01012345678");}
    }
    }
    printf("\n");

    if(LFirst(&list, &NC)){ //mr.kk는 그냥 없어져라!
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