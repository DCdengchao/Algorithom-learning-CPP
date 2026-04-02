/*
给你一个二叉树的根节点 root ， 检查它是否轴对称。
*/

#include<iostream>
#include "tree.h"
using namespace std;

bool isMirror(TreeNode *p,TreeNode *q){
    if(p==NULL&&q==NULL) return  true;
    if(p!=NULL&&q==NULL||p==NULL&&q!=NULL||p!=NULL&&q!=NULL&&p->val!=q->val) return false;
    return isMirror(p->right,q->left)&&isMirror(p->left,q->right);
    return false;
}

bool isSymmetric(TreeNode *root){
    if(root==NULL) return true;
    return isMirror(root->left,root->right);
}