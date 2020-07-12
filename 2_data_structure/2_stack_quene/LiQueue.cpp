#include<stdio.h>
#include<malloc.h>
#include "LiQueue.h"

void InitQueue(LiQueue* quene){
    LiQueue lq = (LiQueue)malloc(sizeof(LiQueue));
    lq->front = NULL;
    lq->rear = NULL;
    *quene = lq;
}

bool EnQueue(LiQueue* quene, void* p){
    if(*quene == NULL)return false;

    LiQueueNode* lqn = (LiQueueNode*)malloc(sizeof(LiQueueNode));
    lqn->data = p;
    lqn->next = NULL;

    // --> n --> n --> n
    if((*quene)->rear == NULL){
        (*quene)->front = lqn;
        (*quene)->rear = lqn;
    }else{
        (*quene)->rear->next = lqn;
        (*quene)->rear = lqn;
    }
    return true;
}

bool DeQueue(LiQueue* quene, void** p){
    LiQueue q = *quene;
    if(q == NULL || q->front == NULL || IsEmpty(*quene))return false;

    *p = q->front->data;
    if(q->front==q->rear){
        q->front = q->rear = NULL;
    }else{
        q->front = q->front->next;
    }

    return true;
}

bool IsEmpty(LiQueue quene){
    return quene->front == NULL && quene->rear == NULL;
}

void Destory(LiQueue* quene){
    free(*quene);
}