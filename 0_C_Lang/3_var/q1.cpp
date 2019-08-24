#include<stdio.h>
#include<string.h>

int main(){
    /**
     * 此处用斜杠定义了转义的字符!
     * \t \n \r等属于控制字符
     * \0 \00 \000 属于用8进制ascii码定义字符
     * \x0 属于用16进制ascii码定义字符
     * 故此处答案为:字符长度等于5
     **/    
    char* c = "\ta\017bc";
    
    // 对于字符串的长度,可以用strlen(char*)去获取
    int d = strlen(c);
    printf("strlen:%d\n",d);

    return 0;
}