#ifndef _TEST_
#define _TEST_

#include<iostream>
#include<malloc.h>

//Tree
typedef int TDataType;
typedef struct TreeNode{
	TDataType data;
	struct TreeNode* left;
	struct TreeNode* right;
}TNode;
typedef TNode* Tree;

//Stack
typedef TNode* SDataType;
typedef struct StackNode{
	SDataType data;
	struct StackNode* next = NULL;
}SNode;
typedef SNode* Stack;

Stack initStack(); 
void push(Stack& stack,SDataType e);
bool pop(Stack& stack,SDataType& e);
bool top(Stack& stack,SDataType& e);
bool isEmpty(Stack stack);
int len(Stack stack); 
 
#endif
