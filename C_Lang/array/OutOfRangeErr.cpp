#include<stdio.h>
#include<string.h>

int main(){
    // 定义变量
    int a = 5;
    char str[10] = {0};

    // linux 环境下当前报错，若windows环境下不报错，则a的值可能被覆盖成0
    strcpy(str,"123456789123");
    
    printf("str:%s",str);
    printf("%d",a);

    return 0;
}