#include<stdio.h>
#include<malloc.h>
#include "LiQueue.h"

int main(){
    LiQueue queue;
    InitQueue(&queue);

    for(int i=1;i<4;i++){
        int* buf = (int*)malloc(sizeof(int));
        *buf = i;
        EnQueue(&queue,(void*)buf);
    }

    void* p;
    int a = 0;

    p = queue->front->data;
    a = *((int*)p);
    // printf("%d\n",a);
    // printf("%d",DeQueue(&queue,&p));

    while (DeQueue(&queue,&p)){
        int* z = (int*)p;
        a= *z;
        printf("k:%d\n",a);
    }
    return 0;
}