#include<stdio.h>
#include<malloc.h>
#include "LiStack.h"

void InitStack(LiStack *stack){
    *stack = NULL;
}

bool GetTop(LiStack stack, LiStackElementType* p){
    return false;
}

bool Push(LiStack *stack, LiStackElementType p){
    LiNode* ln = (LiNode*)malloc(sizeof(LiNode));
    ln->data = p;
    ln->next = *stack;
    *stack = ln;
    return true;
}

bool Pop(LiStack *stack, LiStackElementType* p){
    if(stack != NULL){
        *p = (*stack)->data;
        *stack = (*stack)->next;
        return true;
    }
    return false;
}

bool IsEmpty(LiStack stack){
    return stack==NULL;
}

void ClearStack(LiStack *stack){
    free(*stack);
}
