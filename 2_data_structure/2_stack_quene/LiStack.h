#ifndef _LISTACK_H_
#define _LISTACK_H_

#include<stdbool.h>

// typedef int LiStackElementType;

typedef struct LiNode
{
    void* data;
    struct LiNode* next;
} *LiStack,LiNode;

void InitStack(LiStack* stack);
bool GetTop(LiStack stack, void* p);
bool Push(LiStack* stack, void* p);
bool Pop(LiStack* stack, void** p);
bool IsEmpty(LiStack stack);
void ClearStack(LiStack* stack);

#endif