#ifndef _LISTACK_H_
#define _LISTACK_H_

#include<stdbool.h>

typedef int LiStackElementType;

typedef struct LiNode
{
    LiStackElementType data;
    struct LiNode* next;
} *LiStack,LiNode;

void InitStack(LiStack* stack);
bool GetTop(LiStack stack, LiStackElementType* p);
bool Push(LiStack* stack, LiStackElementType p);
bool Pop(LiStack* stack, LiStackElementType* p);
bool IsEmpty(LiStack stack);
void ClearStack(LiStack* stack);

#endif