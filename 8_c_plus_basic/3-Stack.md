# Stack
stack就是“栈”。栈是一种后进先出的元素序列，访问和删除都只能对栈顶的元素（即最后一个被加入栈的元素）进行，并且元素也只能被添加到栈顶。栈内的元素不能访问。如果一定要访问栈内的元素，只能将其上方的元素全部从栈中删除，使之变成栈顶元素才可以。

## 1. 可用操作
```
void pop();                // 弹出（即删除）栈顶元素

T & top();	           // 返回栈顶元素的引用。可读取栈顶元素的值，也可以修改栈顶元素

void push (const T & x);   // 将 x 压入栈顶

bool empty();             // 返回栈是否为空

size_type size();          // 返回栈的大小
```

## 2. 使用方法
### 2.1 引入头文件
``` c++
#include<stack>
```

### 2.2 构造对象
``` c++
    stack <int> stk1;
    stack <string> stk2;
```

### 2.3 常用操作
``` c++
    stack <int> stk;

    stk.push(3);
    stk.push(1);
    stk.pop();
    int x = stk.top();
    cout<<stk.size()<<endl;
```

