# Queue
queue 就是“队列”。队列是先进先出的，和排队类似。队头的访问和删除操作只能在队头进行，添加操作只能在队尾进行。不能访问队列中间的元素。

queue 可以用 list 和 deque 实现，默认情况下用 deque 实现。

## 1. 可用操作
```
reference& front();	           // 返回队头的元素或索引

reference& back();	           // 返回队尾的元素或索引

void push (const value_type&);   // 将 `值` 压入队尾

void pop();                // 将 `队首` 的值弹出来

bool empty();             // 返回队列是否为空

size_type size();          // 返回队列的大小
```

## 2. 使用方法
### 2.1 引入头文件
``` c++
#include<queue>
```

### 2.2 构造对象
``` c++
    queue <int> queue1;
    queue <string> queue2;
```

### 2.3 常用操作
``` c++
    queue <int> q;

    q.push(3);
    q.push(2);
    int x = q.top(); // 取队头元素
    q.pop();
    cout<<q<<endl;
```

