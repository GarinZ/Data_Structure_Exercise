//
// Created by GarinZhang on 2016/10/16.
//

#ifndef DATA_STRUCTURE_EXERCISE_LINKED_LIST_H
#define DATA_STRUCTURE_EXERCISE_LINKED_LIST_H

/* 线性表顺序存储结构定义
 *
 */
#define MAXSIZE 20

typedef char ElemType;

typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SqList;


#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status; // 用于定义函数返回值类型

/*
 * 线性表顺序存储结构
 * 操作部分
 */

Status GetElem(SqList L, int i, ElemType *e);
Status ListInsert(SqList *L, int i, ElemType e);
ElemType ListDelete(SqList *L, int i, ElemType *e);

#endif //DATA_STRUCTURE_EXERCISE_LINKED_LIST_H
