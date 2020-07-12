#include "SqQueue.h"
#include <malloc.h>

void InitalQueue(SqQueue* quene){
    quene->front = 0;
    quene->rear = 0;
}

bool EnQueue(SqQueue* quene,SqQueueDataType data){
    int size = quene->rear - quene->front + SqQueueMaxSize;
    if(size%SqQueueMaxSize < SqQueueMaxSize){
        quene->data[quene->rear++] = data;
        return true;
    }
    return false;
}

bool DeQueue(SqQueue* quene,SqQueueDataType* data){
    if(!IsEmpty(*quene)){
        *data = quene->data[quene->front++];
        return true;
    }
    return false;
}

bool IsEmpty(SqQueue quene){
    return quene.front == quene.rear;
}

bool Destory(SqQueue* quene){
    free(quene);
}