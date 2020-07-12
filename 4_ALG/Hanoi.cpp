#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void hanoi(string src,string mid,string dst,int n){
    if(n==1){
        cout<<src<<"-->"<<dst<<endl;
    }else{
        hanoi(src,dst,mid,n-1);
        cout<<src<<"-->"<<dst<<endl;
        hanoi(mid,src,dst,n-1);
    }
}

int main(){
    hanoi("A","B","C",60);
    return 0;
}
