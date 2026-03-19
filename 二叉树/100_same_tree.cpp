/*
给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。

如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
 */ 

#include<iostream>
#include "tree.h"
using namespace std;

bool isSameTree(TreeNode *p,TreeNode *q){
    if(p==NULL&&q==NULL) return true;
    if(p!=NULL&&q==NULL||p==NULL&&q!=NULL) return false;
    if(p!=NULL&&q!=NULL&&p->val!=q->val) return false;
    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}