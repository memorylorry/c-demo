/**
 * 用栈实现递归算法的非递归形式。如：
 *          1                              ,n=0
 * P(n,x) = 2x                             ,n=1
 *          2x*P(n-1,x) - 2(n-1)*P(n-2,x)  ,n>1  
 **/

#include <stdio.h>

typedef struct StackNode{
    int no;
    int val;
}Stack;

int P(int n, int x){
    // 初始化数据
    Stack stack[100];
    int top = -1;
    int fv1 = 1, fv2 = 2*x;

    // 将no>2的先装入栈
    while(n>2)
        stack[++top].no = n--;

    // 从栈顶开始计算每一个值
    while(top>0){
        stack[top].val = 2*x*fv2 + 2*(stack[top].no-1)*fv1;
        fv1 = fv2;
        fv2 = stack[top].val;
        top --;
    }

    return fv2;
}

int main(){
    int n = 3;
    int x = 2;
    int rs = P(n,x);
    printf("%d",rs);
    return 0;
}