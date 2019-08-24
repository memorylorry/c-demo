#include<stdio.h>

int main(){
    int i,j,k,l;
    
    k = (i=2,j=3,k=4);
    // 此处打印的k的值为?
    printf("%d\n",k);

    return 0;
}