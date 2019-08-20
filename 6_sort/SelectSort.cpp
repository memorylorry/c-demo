#include <stdio.h>
#include "../common/util.h"

/**
 * 简单的选择排序
 **/
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

/**
 * 大顶堆的构建
 **/
void adjustDown(int* nums, int k ,int size){
    // printArray(nums,size + 1);
    int i = 0;
    nums[0] = nums[k]; // 用0号位记录父节点值
    for(i = k*2; i<=size; i=2*i){
        if(i<size && nums[i]<nums[i+1])
            i++;// 找到2个子节点中的最大的位置
        if(nums[0] > nums[i])break; // 如果0号位更大，终止循环
        else{
            nums[k] = nums[i];
            k = i;
        }
    }
    nums[k] = nums[0];
}
void buildMaxHeap(int* nums, int size){
    for(int i = size; i>1 ; i--){
        adjustDown(nums,i/2,size);
    }
}


//大顶堆的构建

// 大顶堆的排序
void maxHeapSort(int* nums,int size){
    // TODO achive it
}

// 小顶堆排序
void minHeapSort(int* nums,int size){
    // TODO achive it
}

int main(){
    // int nums[] = {6,3,2,9,1,4,8,7,5};
    // int size = sizeof(nums)/sizeof(int);

    // simpleSelectSort(nums,size);
    // printArray(nums,size);

    int nums2[] = {0,6,3,2,9,1,4,8,7,5};
    int size2 = sizeof(nums2)/sizeof(int) - 1;
    buildMaxHeap(nums2,size2);
    printArray(nums2,size2);

    return 0;
}