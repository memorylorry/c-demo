#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

typedef int BinaryTreeNodeElementType;

typedef struct BinaryTreeNode
{
    BinaryTreeNodeElementType data;
    struct BinaryTreeNode* lchild;
    struct BinaryTreeNode* rchild;
}*BinaryTree,BinaryTreeNode;

void initailBinaryTree(BinaryTree* tree);
void insertNode(BinaryTree* tree, BinaryTreeNodeElementType data);
void preSort(BinaryTree tree);

#endif