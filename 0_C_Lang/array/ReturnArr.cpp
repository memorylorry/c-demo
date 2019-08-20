#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include "../../common/util.h"

char* form_arr_inner(){
    // 该数字属于自定义函数中的局部变量，
    // 在函数执行完后，所有的变量将会回收
    char str[100] = "Hello world!";
    return NULL;//str;
}

/**
 * 第二种方法，由于动态开辟内存在堆区，堆区不想上一讲中局部变量在栈区存储，系统根据它的生命周期自动收回，而是手动开辟，手动释放，这样就可以完全规避问题。
 * (!)需要注意的是：记得用完free掉，防止内存泄露！
 **/  
char* form_arr(){
    char* p = (char*)malloc(sizeof(char));
    strcpy(p,"Hello world!\n");
    return p;
}

/**
 * 第三种方法：虽然没有在函数中返回数组，但也可以解决数组通信问题，主要思路就是调用方中定义数组，然后将地址传入，由于该内存属于调用方，而非被调用方，故被调用方在调用结束后释放掉内存也无所谓。
 **/ 
char* form_arr_outter(char* p){
    strcpy(p,"Hello world!\n");
    return p;
}

int main(){
    // 1. 在自定义函数内初始化的数组，这种方法不可取
    // char *p = form_arr_inner();
    // printf("%s",p); // 此处会抛出警告

    // 2. 自定义函数通过malloc初始化数组，并返回（可行）
    char *p2 = form_arr();
    printf("%s",p2);

    // 3. 通过传入外部定义的数组，进行操作并返回(可行)
    char p3[100] = {0};
    form_arr_outter(p3);
    printf("%s",p3);

    return 0;
}