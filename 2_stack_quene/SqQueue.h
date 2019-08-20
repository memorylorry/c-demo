/**
 * 顺序循环队列
 **/
#ifndef _SQQUEUE_H_
#define _SQQUEUE_H_

#include<stdbool.h>

#define SqQueueMaxSize 100
typedef int SqQueueDataType;

typedef struct SqQueue{
    int front,rear;
    SqQueueDataType data[SqQueueMaxSize];
}SqQueue;

void InitalQueue(SqQueue* quene);
bool EnQueue(SqQueue* quene,SqQueueDataType data);
bool DeQueue(SqQueue* quene,SqQueueDataType* data);
bool IsEmpty(SqQueue quene);
bool Destory(SqQueue* quene);

#endif