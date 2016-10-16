//
// Created by GarinZhang on 2016/10/16.
//

#include "list.h"

Status GetElem(SqList L, int i, ElemType *e){
    if(L.length == 0 || i < 0 || i > L.length - 1 )
        return ERROR;

    *e = L.data[i];
    return OK;
}


Status ListInsert(SqList *L, int i, ElemType e){
    int k;

    if(L -> length == MAXSIZE )
        return ERROR;

    if(i < 0 || i > L -> length - 1)
        return ERROR;


    if(i != L -> length){      // 要插入元素不在表尾
        for(k = L -> length - 1; k >= i; k --)
            L -> data[k + 1] = L -> data[k];
    }

    L -> data[i] = e;
    L -> length ++;
    return OK;

}







