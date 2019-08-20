#include<stdio.h>
#include<malloc.h>
#include "SqStack.h"

int main(){
    SqStack stack;
    SqStackElementType* a;
    InitStack(&stack);
    Push(&stack,1);
    Push(&stack,3);
    Push(&stack,6);
    
    Pop(&stack,a);
    printf("%d\n",*a);
    Pop(&stack,a);
    printf("%d\n",*a);
    Pop(&stack,a);
    printf("%d\n",*a);
    
    return 0;
}