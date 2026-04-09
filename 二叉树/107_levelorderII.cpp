/*
给你二叉树的根节点 root ，返回其节点值 自底向上的层序遍历 。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
*/

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include "tree.h"

using namespace std;

/*
从根节点遍历到叶子节点
每个节点访问一次，在数组b中记录当前层的节点值
每层访问完后，将数组b加入到数组a中
最后将数组a反转，得到自底向上的层序遍历结果
*/

vector<vector<int>> levelOrder(TreeNode *root){
    queue<TreeNode*> q;
    if(root!=NULL) q.push(root);
    vector<vector<int>> a;
    while(!q.empty()){
        vector<int> b;
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode *t = q.front();
            q.pop();
            b.push_back(t->val);
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
        a.push_back(b);
    }
    reverse(a.begin(),a.end());
    return a;
}