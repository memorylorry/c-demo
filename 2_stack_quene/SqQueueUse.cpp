#include<stdio.h>
#include<malloc.h>
#include<unistd.h>
#include "SqQueue.h"

int main(){
    SqQueue queue;
    InitalQueue(&queue);

    for(int i=0;i<3;i++)
        EnQueue(&queue,6+i);

    int a = 0;
    while (DeQueue(&queue,&a)){
        printf("a:%d\n",a);
    }

    return 0;
}