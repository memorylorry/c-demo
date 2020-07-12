#include <stdio.h>
#include "../common/util.h"

/**
 * 冒泡排序
 **/
int* bubbleSort(int* arr,int size){
    printf("len:%d\n",size);

    //若数组长度小于2直接返回
    if(size<2)return arr;

    //否则进行冒泡排序
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int buf = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = buf;
            }
        }
    }
    return arr;
}

int main(){
    int nums[] = {6,3,2,9,1,4,8,7,5};
    int size = sizeof(nums)/sizeof(int);

    int* sortedArry = bubbleSort(nums,size);
    printArray(sortedArry,size);

    return 0;
}