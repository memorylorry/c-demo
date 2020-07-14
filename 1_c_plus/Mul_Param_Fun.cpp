#include <iostream>
#include <string.h>
#include <stdarg.h>
using namespace std;

/**
 * @brief 定义1个含有可变个数参数的函数
 * @param arg_size
 */
void test(int arg_size, ...){
    va_list args; /*   定义保存函数参数的结构   */
    va_start(args,arg_size); /* args接受参数的数据，arg_size表示从这个参数开始的后面所有参数 */

    // use
    for(int i=0;i<arg_size;i++){
        int x = va_arg(args,int); //传入类型,弹出并接受参数
        cout<<x<<endl;
    }
}

int main(){
    test(3, 6, 5, 9);
    return 0;
}
