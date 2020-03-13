#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void init(vector<int>* ivec){ // 如果要改变，需要传入指针！！！
    for(int i=0;i<10;i++)
        ivec->push_back(i+10);
}

void read(vector<int> ivec){
    auto a = ivec.begin();
    auto b = ivec.end();
    while (a!=b)
    {
        cout<<*a<<endl;
        a++;
    }
    cout<<"read "<<ivec.size()<<endl;
}

int main(){
    vector<int> ivec;
    init(&ivec);
    cout<<"initial "<<ivec.size()<<endl;
    // read(ivec);
    ivec.begin();
    ivec.rbegin();
    ivec.insert( ivec.begin() , vector<int>::value_type(3) );
    cout<<ivec[0]<<endl;
    return 0;
}