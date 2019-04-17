#ifndef _TEST_
#define _TEST_

#include<iostream>
#include<malloc.h>

typedef struct snode{
	int data;
	struct snode* next = NULL;
}Node; 
typedef Node* Stack;

Stack initStack(); 
void push(Stack& stack,int e);
bool pop(Stack& stack,int& e);
bool isEmpty(Stack stack);
int len(Stack stack); 

#endif
