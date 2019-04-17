#include "core.h"
using namespace std;

Stack initStack(){
	return NULL;
}

void push(Stack& stack,int e){
	Stack n = (Stack)malloc(sizeof(Node));
	n->data = e;
	n->next = NULL; 
	
	if(stack==NULL){
		stack = n;
		return;
	}
	
	n->next = stack;
	stack = n;
}

bool pop(Stack& stack,int& e){
	if(stack==NULL)return false;
	
	e = stack->data;
	stack = stack->next;
	return true;
}


bool isEmpty(Stack stack){
	if(stack==NULL)return true;
	return false ;
}
int len(Stack stack){
	if(stack==NULL)return 0;
	
	Stack p = stack;
	int len = 1;
	while(p->next!=NULL){
		p = p->next;
		len ++;
	} 
	return len;
}

