#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string a = "test"; // 赋值初始化
    string b = a; // b is a copy of a
    string c(10,'c'); // c is cccccccccc   采用的直接初始化方式
    string d = string(10,'d'); // 直接初始化一个串，并赋予给d
    string e("temp"); // 直接赋值
    cin>>a; // 读入不带空格的串
    cout<<a<<endl;
    return 0;
}