#ifndef _SQSTACK_H_
#define _SQSTACK_H_

#include<stdio.h>
#include<stdbool.h>

typedef int SqStackElementType;

#define SqStackMaxSize 100

typedef struct
{
    int top;
    SqStackElementType data[SqStackMaxSize];
}SqStack, *SqStackPointer;

void InitStack(SqStack* stack);
bool GetTop(SqStack* stack, SqStackElementType* p);
bool Push(SqStack* stack, SqStackElementType p);
bool Pop(SqStack* stack, SqStackElementType* p);
bool IsEmpty(SqStack* stack);
void ClearStack(SqStack* stack);

#endif