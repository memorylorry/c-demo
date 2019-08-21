#ifndef _LISTACK_H_
#define _LIQ_H_

#include<stdbool.h>

typedef struct LiQueueNode{
    void* data;
    struct LiQueueNode* next;
}LiQueueNode;

typedef struct LiQueue2{
    LiQueueNode* front;
    LiQueueNode* rear;
}*LiQueue;

void InitQueue(LiQueue* quene);
bool EnQueue(LiQueue* quene, void* p);
bool DeQueue(LiQueue* quene, void** p);
bool IsEmpty(LiQueue quene);
void Destory(LiQueue* quene);

#endif