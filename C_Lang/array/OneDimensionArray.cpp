#include<stdio.h>
#include "../../common/util.h"

int main(){

    int a[10] = {1};
    int b[3] = {1,2,3};
    char c[100] = {'H','e','l','l','o',' ','w','o','r','l','d','!'};

    printArray(a,10);
    printArray(b,3);
    printCharArray(c,100);

    return 0;
}