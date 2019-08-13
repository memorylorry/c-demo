#include "./util.h"
#include<stdio.h>

void printArray(int* arr, int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void printCharArray(char* arr, int size){
    for(int i=0;i<size;i++){
        printf("%c\t",arr[i]);
    }
    printf("\n");
}