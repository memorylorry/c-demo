#include "core.h" 
using namespace std;

Tree initTree(){
	TDataType e;
	cin>>e;
	
	if(e==0){
		return NULL;
	}
	
	TNode* n = (TNode*)malloc(sizeof(TNode));
	n->data = e;
	n->left = initTree();
	n->right = initTree();
	return n;
}

void visit(TNode* node){
	cout<<node->data<<","; 
}

void inOrder(TNode* tree){
	Stack s = initStack();
	TNode* p = tree;
	while(p!=NULL||!isEmpty(s)){
		bool z = p!=NULL; 
		if(p!=NULL){
			push(s,p);
			p = p->left;
		}else{
			pop(s,p);
			visit(p);
			p = p->right;
		}
	}
}

void preOrder(TNode* tree){
	Stack s = initStack();
	TNode* p = tree;
	while(p!=NULL||!isEmpty(s)){
		if(p!=NULL){
			visit(p);
			push(s,p->right);
			p = p->left;
		}else{
			pop(s,p); 
		}
	}
}

void postOrder(TNode* tree){
	Stack s = initStack();
	TNode* p = tree;
	TNode* last = NULL;
	while(p!=NULL||!isEmpty(s)){
		if(p!=NULL){
			push(s,p);
			p = p->left;
		}else{
			//×ó×ÓÊ÷Îª¿Õ 
			top(s,p);
			if((p->right!=NULL)&&last != p->right){
				p = p->right;
			}else{
				pop(s,p);
				visit(p);
				last = p;
				p = NULL;
			}
		}
	} 
} 

int main() {
	Tree tree = initTree();
	inOrder(tree); 
	cout<<endl;
	preOrder(tree);
	cout<<endl;
	postOrder(tree); 
	return 0;
}
