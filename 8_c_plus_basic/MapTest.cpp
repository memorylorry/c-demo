#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main(){
    map<string,int> m;

    // method 1. 用array方式增加元素
    m["age"] = 3;
    // method 2. 调用插入方法
    m.insert(map<string,int>::value_type("amount",6));

    cout<<m.size();

    map<string,int>::iterator begin = m.begin();

    map<string,int>::reverse_iterator rbegin = m.rbegin(); // 返回一个指向map尾部的逆向迭代器
    map<string,int>::reverse_iterator rend = m.rend(); // 返回一个指向map头部的逆向迭代器

    return 0;
}