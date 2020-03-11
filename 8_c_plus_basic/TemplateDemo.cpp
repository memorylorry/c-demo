#include<iostream>
#include<vector>
#include<string.h>
#include<typeinfo>
using namespace std;

// 方法泛型
template<typename T> T add(T a, T b){
    return a + b;
}

// 类的泛型
template<typename T> class TemplateDemo
{
private:
    T data;
public:
   void print();
};



int main(){
    int a = add(2,3);
    double b = add(3.1,2.0);
    cout<<a<<" "<<b<<endl;
    return 0;
}