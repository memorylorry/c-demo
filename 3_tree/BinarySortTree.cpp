#include<stdio.h>
#include<malloc.h>

#include "./BinaryTree.h"
#include "../2_stack_quene/LiStack.h"

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

/**
 * 递归方式实现对二叉树的先序遍历
 **/
void preOrder(BinaryTree tree){
    if(tree == NULL) return;
    printf("%d\t",tree->data);
    preOrder(tree->lchild);
    preOrder(tree->rchild);
}

/**
 * 递归方式实现对二叉树的中序遍历
 **/
void inOrder(BinaryTree tree){
    if(tree == NULL) return;
    inOrder(tree->lchild);
    printf("%d\t",tree->data);
    inOrder(tree->rchild);
}

/**
 * 利用栈实现二叉树的先序遍历
 **/
void preOrder2(BinaryTree tree){
    BinaryTree p = tree;
    void* node;
    LiStack stack;
    InitStack(&stack);
    // printf("a:%d\n",p->data);
    // 当tree非空 或 栈非空时循环
    while (p!=NULL || !IsEmpty(stack)){
        if(p!=NULL){
            printf("%d\t",p->data);
            node = (void*)p;
            Push(&stack,node);
            p = p->lchild;
        }else{
            Pop(&stack,&node);
            p = (BinaryTree)node;
            p = p->rchild;
        }
    }
    printf("\n");
    free(stack);
}

/**
 * 利用栈实现二叉树的中序遍历
 **/
void inOrder2(BinaryTree tree){
    BinaryTree p = tree;
    void* node;
    LiStack stack;
    InitStack(&stack);
    while (p!=NULL || !IsEmpty(stack))
    {
        if(p!=NULL){
            node = (void*)p;
            Push(&stack,node);
            p = p->lchild;
        }else{
            Pop(&stack,&node);
            p = (BinaryTree)node;
            printf("%d\t",p->data);
            p = p->rchild;
        }
    }
    
    printf("\n");
    free(stack);
}


int main(){
    BinaryTree tree;
    initailBinaryTree(&tree);

    // 新增加节点
    insertNode(&tree,7);
    insertNode(&tree,5);
    insertNode(&tree,2);
    insertNode(&tree,9);
    insertNode(&tree,8);
    insertNode(&tree,3);
    insertNode(&tree,6);
    insertNode(&tree,4);
    insertNode(&tree,1);

    // 先序遍历
    printf("\n");
    preOrder2(tree);
    preOrder(tree);
    // 中序遍历
    printf("\n");
    inOrder2(tree);
    inOrder(tree);
    

    return 0;
}