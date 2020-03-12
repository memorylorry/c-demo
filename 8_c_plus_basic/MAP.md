# MAP
C++里面的map对象，也是由`<key,val>`构成的键值对，内部采用了元组的结构实现。

## 1. 可用操作
```
    begin()         返回指向map头部的迭代器

    clear(）        删除所有元素

    count()         返回指定元素出现的次数

    empty()         如果map为空则返回true

    end()           返回指向map末尾的迭代器

    equal_range()   返回特殊条目的迭代器对

    erase()         删除一个元素

    find()          查找一个元素

    get_allocator() 返回map的配置器

    insert()        插入元素

    key_comp()      返回比较元素key的函数

    lower_bound()   返回<键值>=给定元素的第一个位置

    max_size()      返回可以容纳的最大元素个数

    rbegin()        返回一个指向map尾部的逆向迭代器

    rend()          返回一个指向map头部的逆向迭代器

    size()          返回map中元素的个数

    swap()           交换两个map

    upper_bound()    返回<键值>给定元素的第一个位置

    value_comp()     返回比较元素value的函数
```

## 2. 使用方法
### 2.1 引入头文件
``` c++
#include<map>
```

### 2.2 构造对象
``` c++
    map<int,int> m1;
    map<string,int> m2;
```

### 2.3 map所包含键值对大小
``` c++
    int size = m.size(); // m 是map类型的对象
```

### 2.4 增加、修改元素
``` c++
    // method 1. 用array方式增加元素
    m["age"] = 3;
    // method 2. 调用插入方法
    m.insert(map<string,int>::value_type("amount",6));
```

### 2.6 查询元素
``` c++
    // find 返回迭代器指向当前查找元素的位置否则返回map::end()位置
    iter = m.find("age");
 
    if(iter != m.end())
       cout<<"Find, the value is"<<iter->second<<endl;
    else cout<<"Do not Find"<<endl;
```

### 2.5 删除元素
``` c++
    //查找，然后通过迭代器刪除
    iter = m.find("age");
    m.erase(iter);
    
    //用关键字刪除
    int n = m.erase("age"); //如果刪除了會返回1，否則返回0
    
    //用迭代器范围刪除 : 把整个map清空,等同于m.clear()
    m.erase(m.begin(), m.end());
```



### 2.7 其它常用操作
``` c++
    map<string,int> m;

    int size = m.size(); // 返回map的容量
    bool flag = m.empty(); // 如果map为空则返回true

    map<string,int>::iterator begin = m.begin(); // 返回指向map头部的迭代器
    map<string,int>::iterator end = m.end(); // 返回指向map末尾的迭代器

    map<string,int>::reverse_iterator rbegin = m.rbegin(); // 返回一个指向map头部的逆向迭代器
    map<string,int>::reverse_iterator rend = m.rend(); // 返回一个指向map尾部的逆向迭代器

    int ma = m.max_size(); // 返回可以容纳的最大元素个数

    m.clear(); // 删除所有元素
```

### 2.8 备注
. 当map<key_type,int>中不存在指定的key时，直接取出的值为`0`；

. 当map<key_type,string>中不存在指定的key时，直接取出的值为`空串`；