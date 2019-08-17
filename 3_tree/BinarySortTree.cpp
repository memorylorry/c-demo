#include<stdio.h>
#include<malloc.h>

#include"./BinaryTree.h"

void initailBinaryTree(BinaryTree* tree){
    *tree = NULL;
}

void insertNode(BinaryTree* tree, BinaryTreeNodeElementType data){
    BinaryTreeNode* node = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
    node->data = data;

    // 若指针为空,直接指向该节点
    if(*tree == NULL){
        *tree = node;
        return;
    }

    // 若不为空
    BinaryTree p = *tree;
    while (true){
        if(data < p->data){
            if(p->lchild!=NULL)
                p = p->lchild;
            else{
                p->lchild = node;
                break;
            }
        }else{
            if(p->rchild!=NULL)
                p = p->rchild;
            else{
                p->rchild = node;
                break;
            }
        }
    }

}

void preSort(BinaryTree tree){
    if(tree == NULL) return;
    preSort(tree->lchild);
    printf("%d\t",tree->data);
    preSort(tree->rchild);
}

int main(){
    BinaryTree tree;
    initailBinaryTree(&tree);

    insertNode(&tree,7);
    insertNode(&tree,5);
    insertNode(&tree,2);
    insertNode(&tree,9);
    insertNode(&tree,8);
    insertNode(&tree,3);
    insertNode(&tree,6);
    insertNode(&tree,4);
    insertNode(&tree,1);

    preSort(tree);
    // printf("%d\n",tree->data);
    // printf("%d\n",tree->lchild->data);
    return 0;
}