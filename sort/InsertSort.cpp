#include<stdio.h>
#include<unistd.h>
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

/**
 * 折半插入排序
 **/ 
void BInsertSort(int* arr, int len){
    for(int i=2;i<len;i++){
        if(arr[i]<arr[i-1]){
            arr[0] = arr[i];

            //折半查找到插入位,最终状态low = high+1，插入位必定在high所指的右边，在low的左边
            int low = 1,high = i-1;
            while(low<=high){
                int pos = (low+high)/2;
                if(arr[pos] > arr[0]){
                    //插入前半段
                    high = pos-1;
                }else{
                    //插入后半段
                    low = pos+1;
                }
            }

            //元素后移，一直移到pos为high+1的元素为止
            int j = 0;
            for(j=i-1;j>high;j--){
                arr[j+1] = arr[j];
            }
            arr[j+1] = arr[0];

            printArray(arr,len);
        }
    }
}

 /**
 * 2-路插入排序
 **/ 
void P2InsertSort(int* arr, int len){
    
}


int main(){
    int nums[] = {0,6,3,2,9,1,4,8,7,5};

    int size = sizeof(nums)/sizeof(int);
    //straightInsertSort(nums, size);
    BInsertSort(nums, size);
    
    return 0;
}