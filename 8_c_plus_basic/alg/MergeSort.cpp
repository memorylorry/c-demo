#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<int> Merge(vector<int> a,vector<int> b){
    vector<int> res;
    int i = 0,j=0;
    // 当2个数组都有数
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res.push_back(a[i++]);
        }else{
            res.push_back(b[j++]);
        }
    }
    // 判断哪个数组剩余,拼接剩余数组
    if(i<a.size()){
        res.insert(res.end(),a.begin()+i,a.end());
    }else if(j<b.size()){
        res.insert(res.end(),b.begin()+j,b.end());
    }
    return res;
}

vector<int> MergeSort(vector<int> arr,int left,int right){
    if(left<right){
        int mid = (left+right)/2;
        vector<int> a = MergeSort(arr,left,mid);
        vector<int> b = MergeSort(arr,mid+1,right);
        return Merge(a,b);
    }
    vector<int> res{arr[left]};
    return res;
}

int main(){
    vector<int> arr{5,1,7,2,6,3,9,8,4};
    arr = MergeSort(arr,0,arr.size()-1);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}