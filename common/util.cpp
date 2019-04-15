#include "./util.h"
#include<stdio.h>

void printArray(int* arr, int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}