#include<stdio.h>
#include<malloc.h>
#include "LiStack.h"

void InitStack(LiStack *stack){
    *stack = NULL;
}

bool GetTop(LiStack stack, void* p){
    return false;
}

bool Push(LiStack *stack, void* p){
    LiNode* ln = (LiNode*)malloc(sizeof(LiNode));
    ln->data = p;
    ln->next = *stack;
    *stack = ln;
    return true;
}

bool Pop(LiStack *stack, void** p){
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
