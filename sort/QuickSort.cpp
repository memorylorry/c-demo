#include "../common/util.h"
#include<stdio.h>


void quickSort(int* arr,int left,int right){
    if(left>=right)return;

    int key = arr[left];
    int i = left,j = right;

    while(i<j){
        
        while(i<j && key<arr[j]){
            j--;
        }
        if(key>arr[j]){
            int buf = arr[i];
            arr[i] = arr[j];
            arr[j] = buf;
        }

        while(i<j && key>arr[i]){
            i++;
        }
        if(key<arr[i]){
            int buf = arr[i];
            arr[i] = arr[j];
            arr[j] = buf;
        }
    }
    quickSort(arr,left,i-1);
    quickSort(arr,i+1,right);
}

int main(){
    int nums[] = {6,3,2,9,1,4,8,7,5};
    int size = sizeof(nums)/sizeof(int);

    quickSort(nums,0,size-1);
    printArray(nums,size);
    return 0;
}