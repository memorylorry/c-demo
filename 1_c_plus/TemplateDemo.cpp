#include<iostream>
#include<vector>
#include<string.h>
#include<typeinfo>
using namespace std;

// 方法泛型
template<typename T> T add(T a, T b){
    return a + b;
}

// 类模板
template<class T>
class StackNode{
public:
    StackNode<T>* point;
    T data;
};
template<class T>
class Stack
{
private:
    // 指向栈顶
    StackNode<T>* point;
public:
    void push(T data);
    T pop();
};
template<class T> void Stack<T>::push(T data){
    StackNode<T> node;
    node.data = data;
    node.point = point;
    point = &node;
    printf("push: %d\n",&node);
    printf("push: %d\n",point);
}
// TO-DO 模板类的指针指向的数据被退回，需要修复该bug
template<class T> T Stack<T>::pop(){
    T data = point->data;
    printf("pop %d %d\n",point,point->data);
    point = point->point;
    return data;
}

int main(){
    // 使用方法泛型的实例
    int a = add(2,3);
    double b = add(3.1,2.0);
    cout<<a<<" "<<b<<endl;
    // 使用类泛型的实例
    Stack<int> n;
    n.push(3);
    n.push(2);
    printf("%d\n",n.pop());
    return 0;
}
