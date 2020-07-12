# STL
STL是Standard Template Library的简称，中文名标准模板库，惠普实验室开发的一系列软件的统称。它是由Alexander Stepanov、Meng Lee和David R Musser在惠普实验室工作时所开发出来的。从根本上说，STL是一些“容器”的集合，这些“容器”有list,vector,set,map等，STL也是算法和其他一些组件的集合。这里的“容器”和算法的集合指的是世界上很多聪明人很多年的杰作。STL的目的是标准化组件，这样就不用重新开发，可以使用现成的组件。STL是C++的一部分，因此不用安装额外的库文件。

## 容器

|  头文件   | 容器名  | 说明 |
|  ----  | ----  | ---- |
| 序列式容器 |
| [vector](./0-Vector.md)  | 向量 | 连续存储的元素 |
| [list](./1-List.md)  | 列表 | 由节点组成的双向链表，每个结点包含着一个元素 |
| [dequeue](./2-Dequeue.md)  | 双端队列 | 连续存储的指向不同元素的指针所组成的数组 |
| 适配器容器 |
| [stack](./3-Stack.md)  | 栈 | 后进先出(LIFO)的值的排列 |
| [queue](./4-Queue.md)  | 队列 | 先进先出(FIFO)的值的排列 |
| [priority_queue](link)  | 优先级队列 | 元素的次序是由作用于所存储的值对上的某种谓词决定的的一种队列  |
| 关联式容器 |
| [set](link)  | 集合 | 由节点组成的红黑树，每个节点都包含着一个元素，节点之间以某种作用于元素队的谓词排列，没有两个不同的元素能够拥有相同的次序 |
| [multiset](link)  | 多重集合 | 允许存在两个次序相等的元素的集合 |
| [map](./8-MAP.md)  | 映射 | 由{键，值}对组成的集合，以某种作用于键对上的谓词排列 |
| [multimap](link)  | 多重映射 | 允许键对有相等的次序的映射 |
| [pair](link)  | 对 | 和map类似，但只有一对键值 |
| [auto_ptr](link)  | 智能指针 | 将一个用new开辟内存的指针赋给auto_ptr，会自动回收空间 |


## 迭代器

## 算法