#include <stdio.h>
#include "../common/util.h"

void merge(int *arr,int leftStart,int leftEnd,int rightStart,int rigthEnd){
    int ls = leftStart , le = leftEnd, rs = rightStart, re = rigthEnd;
    // 申请临时的数组
    int len = rigthEnd - leftStart + 1;
    int tmp[len];

    // 开始归并排序
    int k = 0;
    while (ls <= le && rs <= re)
        tmp[k++] = arr[ls] < arr[rs]?arr[ls++]:arr[rs++];
    while (ls <= le)
        tmp[k++] = arr[ls++];
    while (rs <= re)
        tmp[k++] = arr[rs++];
    for(int i=0;i<len;i++)
        arr[leftStart+i] = tmp[i];
}

void mergeSort(int *arr,int left,int right){
    if(left<right){
        // 寻找中间位
        int mid = (left + right) / 2;
        // 切分为左右2块(分而治之),这是对左侧进行归并排序
        mergeSort(arr,left,mid);
        // 这是对右侧进行归并排序
        mergeSort(arr,mid+1,right);
        // 经过了上面的拆分，如下进行归并操作
        merge(arr,left,mid,mid+1,right);
    }
}

int main(){
    int nums[] = {6,3,2,9,1,4,8,7,5};
    int size = sizeof(nums)/sizeof(int);

    mergeSort(nums,0,size-1);
    printArray(nums,size);

    return 0;
}