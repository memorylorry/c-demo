#include<stdio.h>
#include<string.h>

int main(){
    /**
     * 
     **/    
    char v1[] = "China"; // 这种初始化方式,数组携带了 '\0'结束符,故占用5+1个空间
    char v2[] = {'a','v'};// 这种方式只占用2个空间
    int v3[] = {6,2,3};// 这种方式只占用3个空间

    int d1 = sizeof(v1);
    int d2 = sizeof(v2);
    int d3 = sizeof(v3)/sizeof(int);
    printf("strlen:%d\n",d1);
    printf("strlen:%d\n",d2);
    printf("strlen:%d\n",d3);

    int *p1,*p2;
    p1 = v3,p2=v3;
    // int k = *p1+*p2;
    int k = *p1*(*p2); // 去掉括号也可以
    // p1=p2;
    // int k;
    // p2 = k; // error: invalid conversion from ‘int’ to ‘int*’
    printf("%d\n",k);

    return 0;
}