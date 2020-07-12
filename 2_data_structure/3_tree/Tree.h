#ifndef _TREE_H_
#define _TREE_H_

// 定义二叉树的数据域类型
typedef int TreeNodeDataType;

/**
 * 二叉树的基本定义
 **/
typedef struct BTreeNode{
    TreeNodeDataType data;
    struct BTreeNode* lchild;
    struct BTreeNode* rchild;
}BTreeNode;

/**
 * 二叉树的类型声明
 **/
typedef struct BTreeNode* BTree;
typedef struct BTreeNode BTreeNode;

#endif