#ifndef _SQLIST_H_
#define _SQLIST_H_

#define MaxSize 100

typedef int ElementType;

/**
 * 线性表的顺序存储
 **/
typedef struct{
    int length;
    ElementType data[MaxSize];
}SqList;

#endif