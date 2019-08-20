#include<stdio.h>
#include "./template.h"

int main(){
    int a = 1;
    INT p = &a;
    function1(p);
    printf("%d\n",*p);
    return 0;
}