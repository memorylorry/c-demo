#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

typedef int NodeType;
class Stack
{
private:
    /* data */
    vector<NodeType> vectors;
public:
    Stack(/* args */);
    ~Stack();
    void push(NodeType data);
    NodeType pop();
};

Stack::Stack(/* args */)
{
}

Stack::~Stack()
{
}

void Stack::push(NodeType data){
    vectors.push_back(data);
}
NodeType Stack::pop(){
    NodeType res = vectors.back();
    vectors.pop_back();
    return res;
}

int main(){
    Stack stack;
    stack.push(2);
    stack.push(7);
    int res1 = stack.pop();
    int res2 = stack.pop();
    cout<<res1<<" "<<res2<<endl;
    return 0;   
}
