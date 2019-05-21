#include<stdio.h>
#include "../common/util.h"

bool LT(int i,int j){
    return i<j;
}

/**
 * 直接插入排序
 **/ 
void straightInsertSort(int* arr, int len){
    for(int i=2;i<len;i++){
        if(LT(arr[i],arr[i-1])){
            printf("r:[i]%d [i-1]%d i:%d\n",arr[i],arr[i-1],i);
            arr[0] = arr[i]; //放置在哨兵位
            arr[i] = arr[i-1];

            //找到插入位置
            int j =0;
            for(j = i-1;arr[j]>arr[0] && j>0 ;j--){
                printf("j:%d\n",j);
                printArray(arr,len);
                arr[j+1] = arr[j];
            }
            arr[j+1] = arr[0];
            printArray(arr,len);
            printf("\n");
        }
    }
}

int main(){
    int nums[] = {0,6,3,2,9,1,4,8,7,5};

    int size = sizeof(nums)/sizeof(int);
    straightInsertSort(nums, size);
    
    return 0;
}