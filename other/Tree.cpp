#include<iostream>
#include<malloc.h>
using namespace std;

typedef int DataType;
typedef struct INode{
	DataType data; 
	struct INode* left;
	struct INode* right;
}Node; 
typedef Node* NodeP;

Node* createTree(){
	DataType data;
	cin>>data;
	
	if(data==0){
		//exit
		return NULL;
	}
	
	NodeP e = (NodeP)malloc(sizeof(Node));
	e->data = data;
	e->left = createTree();
	e->right = createTree();
}

void preOrder(NodeP tree){
	if(tree){
		cout<<tree->data<<",";
		preOrder(tree->left); 
		preOrder(tree->right);
	}
}

void midOrder(NodeP tree){
	if(tree){
		midOrder(tree->left); 
		cout<<tree->data<<",";
		midOrder(tree->right);
	}
} 

void tailOrder(NodeP tree){
	if(tree){
		tailOrder(tree->left); 
		tailOrder(tree->right);
		cout<<tree->data<<",";
	}
}

int main(){
	NodeP tree = createTree();
	preOrder(tree);
	cout<<endl; 
	midOrder(tree);
	cout<<endl;
	tailOrder(tree);
	return 0;
}
