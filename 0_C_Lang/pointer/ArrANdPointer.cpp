#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include "../../common/util.h"

int main(){
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(int);
    int* p = a;

    for(int i=0;i<size;i++){
        printf("%d\t",*p++);
    }
    
    return 0;
}