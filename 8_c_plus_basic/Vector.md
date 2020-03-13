# Vector
一个vector是类似列表的一个对象集合，每个对象都有对应索引，通过索引支持随机读取。

## 1. 可用操作
```
const_iterator begin (); //返回一个常量的迭代器，不可变

iterator end (); // 返回的是越界后的第一个位置，也就是最后一个元素的下一个位置
 
reverse_iterator rbegin(); // 反序的第一个元素，也就是正序最后一个元素

reverse_iterator rend(); // 和vector::end()原理一样

size_type size(); // 注意与vector::capacity()的区别
 
size_type max_size () const; // 返回容器的最大可以存储的元素个数，这是个极限，当容器扩展到这个最大值时就不能再自动增大

void resize ( size_type sz, T c = T() ); // 重新分配容器的元素个数，这个还可以改容器的容量，如果重新分配的元素个数比原来的小，将截断序列，后面的部分丢弃，如果大于原来的个数，后面的值是c的值，默认为0

size_type capacity (); // 返回vector的实际存储空间的大小，这个一般大于或等于vector元素个数，注意与size()函数的区别

bool empty (); // 当元素个数为0时返回true，否则为false，根据的是元素个数而不是容器的存储空间的大小

void reserve ( size_type n ); // 重新分配空间的大小，不过这个n值要比原来的capacity()返回的值大，不然存储空间保持不变，n值要比原来的实际存储空间大才能重新分配空间，但是最大值不可以大于max_size的值，否则会抛出异常

reference  operator[] ( size_type n ); // 实现了下标访问元素

reference at ( size_type n ); // 在函数的操作方面和下标访问元素一样，不同的是当这个函数越界时会抛出一个异常out_of_range

reference front ( ); // 返回第一个元素的值，与begin()函数有区别，begin()函数返回的是第一个元素的迭代器

reference back ( ); // 同样，返回最后一个元素的值，注意与end()函数的区别

template <class InputIterator> void assign ( InputIterator first, InputIterator last );

void assign ( size_type n, const T& u ); //将丢弃原来的元素然后重新分配元素，第一个函数是使用迭代器，第二个函数是使用n个元素，每个元素的值为u。
 
void push_back ( const T& x );  // 在容器的最后一个位置插入元素x,如果size值大于capacity值，则将重新分配空间

void pop_back ( );  // 删除最后一个元素

iterator insert ( iterator position, const T& x );  // 在迭代器指定的位置前插入n个值为x的元素

iterator erase ( iterator position );  // 删除指定位置的一个元素

iterator erase ( iterator first, iterator last );  // 删除一段序列

void swap ( vector<T,Allocator>& vec );  //交换这两个容器的内容，这涉及到存储空间的重新分配

void clear();  // 将容器里的内容清空，size值为0，但是存储空间没有改变
```

## 2. 使用方法
### 2.1 引入头文件
``` c++
#include<vector>
```

### 2.2 构造对象
``` c++
    vector<int> ivec1 = {1,2,3};
    vector<int> ivec2(10,3); // 10个3
    vector<string> ivec3{"1","2","3"};
    vector<vector<string>> ivec4; // 二维的向量
```

### 2.3 vector所包含键值对大小
``` c++
    int size = ivec.size(); // ivec 是vector类型的对象
```

### 2.4 vector的深拷贝
``` c++
    vector<int> ivec1(10,1);
    vector<int> ivec2 = ivec1; //ivec2的所有元素都是拷贝的ivec1的值，内存单元独立
```

### 2.5 增加、修改元素
``` c++
    // method 1. 用push_back函数增加元素
    ivec.push_back(1);
    // method 2. 使用insert函数，在第0号标号插入元素3
    ivec.insert( ivec.begin() , vector<int>::value_type(3) );
    // method 3. 使用数组的方式修改
    ivec[0] = 33;
    // method 4. 使用脚标读取元素
    cout<<ivec[0]<<endl;
```


### 2.6 删除元素
``` c++
    // 用pop_back函数，可以弹出列表的最后1个元素
    ivec.pop_back();
    // 用erase删除指定标号的元素, 由于是vector采用顺序存储，于是可以通过首地址 + 偏移量
    ivec.erase( ivec.begin() + pos );
```


### 2.7 使用iterator遍历整个vector
``` c++
    auto a = ivec.begin(); // 取头指针
    auto b = ivec.end(); // 取尾指针(尾指针不存元素！)
    while (a!=b){ // 判断指针是否到了尾指针
        cout<<*a<<endl; // 通过取值符号取值
        a++; // 自加移动到下个元素
    }
```

### 2.7 其它常用操作
``` c++
    vector<int> ivec;

    int size = ivec.size(); // 返回vector的容量
    bool flag = ivec.empty(); // 如果vector为空则返回true

    vector<int>::iterator begin = ivec.begin(); // 返回指向vector头部的迭代器
    vector<int>::iterator end = ivec.end(); // 返回指向vector末尾的迭代器

    vector<int>::reverse_iterator rbegin = ivec.rbegin(); // 返回一个指向ivec头部的逆向迭代器
    vector<int>::reverse_iterator rend = ivec.rend(); // 返回一个指向ivec尾部的逆向迭代器

    int va = ivec.max_size(); // 返回可以容纳的最大元素个数

    ivec.clear(); // 删除所有元素
```

