#include<stdio.h>
#include<string.h>
#include<malloc.h>

/**
 * Segmentation fault (core dumped)
 * 这种方式不可行,只是在函数内有效
 **/
void ret_local_var(int* p){
    int a = 2; //局部变量会被回收
    p = &a;
}

void ret_local_var2(int* p){
    int* a = (int*)malloc(sizeof(int)) ; //局部变量会被回收
    p = a;
}

// typedef int* et;

// void ret_heap_var(et& p){
//     int* a = (int*)malloc(sizeof(int));
//     *a = 3;
//     p = a;
// }

// typedef struct Node
// {
//     int data;
//     struct Node* next;
// }*LiNode,Node;


// void test2(Node* ln){
//     Node* n = (Node*)malloc(sizeof(Node));
//     n->data = 4;
//     printf("a:%d\n",ln == NULL);
//     ln->next = n;
//     printf("a:%d\n",ln == NULL);
// }


int main(){
    int* p;
    ret_local_var2(p);
    printf("b:%d\n",p);
    // printf("b:%d\n",lin->next->data);
    return 0;
}