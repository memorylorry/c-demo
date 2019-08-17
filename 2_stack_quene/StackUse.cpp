#include<stdio.h>
#include<malloc.h>
#include "SqStack.h"

int main(){
    SqStack stack;
    SqStackPointer sp = &stack;
    SqStackElementType* a;
    InitStack(sp);
    Push(sp,1);
    Push(sp,3);
    Push(sp,6);
    
    Pop(sp,a);
    printf("%d\n",*a);
    Pop(sp,a);
    printf("%d\n",*a);
    Pop(sp,a);
    printf("%d\n",*a);
    
    return 0;
}