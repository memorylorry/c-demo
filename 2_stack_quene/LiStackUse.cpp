#include<stdio.h>
#include<malloc.h>
#include "LiStack.h"

int main(){
    LiStack sp = NULL;
    // LiStackElementType* a;

    InitStack(&sp);
    int nums[] = {1,3,6};
    for(int i=0;i<3;i++)
        Push(&sp,&nums[i]);    

    int* x= (int*)sp->data;
    void* p;
    Pop(&sp,&p);
    printf("%d\n",*((int*)p));
    Pop(&sp,&p);
    printf("%d\n",*((int*)p));
    Pop(&sp,&p);
    printf("%d\n",*((int*)p));
    
    return 0;
}