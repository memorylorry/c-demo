#include<stdio.h>
#include<malloc.h>
#include "SqStack.h"

void InitStack(SqStack* stack){
    stack->top = -1;
}

bool GetTop(SqStack* stack, SqStackElementType* p){
    return false;
}

bool Push(SqStack* stack, SqStackElementType p){
    if(stack->top < SqStackMaxSize-1){
        stack->data[++stack->top] = p;
        return true;
    }
    return false;
}

bool Pop(SqStack* stack, SqStackElementType* p){
    if(stack->top >= 0){
        *p = stack->data[stack->top--];
        return true;
    }
    return false;
}

bool IsEmpty(SqStack* stack){
    return (stack->top) < 0;
}

void ClearStack(SqStack* stack){
    free(stack);
}
