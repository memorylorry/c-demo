#include <stdio.h>
#include "../common/util.h"

// 交换元素
void swap(int* nums,int i,int j){
    int buf = nums[i];
    nums[i] = nums[j];
    nums[j] = buf;
}

// 简单的选择排序
void simpleSelectSort(int* nums,int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        // 从找出最小的元素
        for(int j=i+1;j<size;j++)
            if(nums[min]>nums[j])
                min = j;
        
        // 若min不是i号元素，交换位置
        if(min != i)swap(nums,i,min);
    }
}

int main(){
    int nums[] = {6,3,2,9,1,4,8,7,5};
    int size = sizeof(nums)/sizeof(int);

    simpleSelectSort(nums,size);
    printArray(nums,size);
    return 0;
}