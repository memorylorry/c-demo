#include<malloc.h>
#include "./template.h"


void function1(INT &i){
    int* p = (INT)malloc(sizeof(int));
    *p = 2;
    i = p;
}


void function2(int* i){
    *i = 2;
}