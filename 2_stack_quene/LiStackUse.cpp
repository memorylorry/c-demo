#include<stdio.h>
#include<malloc.h>
#include "LiStack.h"

int main(){
    LiStack sp = NULL;
    LiStackElementType* a;

    InitStack(&sp);
    Push(&sp,1);
    Push(&sp,3);
    Push(&sp,6);

    Pop(&sp,a);
    printf("%d\n",*a);
    Pop(&sp,a);
    printf("%d\n",*a);
    Pop(&sp,a);
    printf("%d\n",*a);
    
    return 0;
}