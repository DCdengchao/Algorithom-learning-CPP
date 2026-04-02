/*
给你二叉树的根节点 root ，返回其节点值的 层序遍历 。 （即逐层地，从左到右访问所有节点）。
*/

#include<iostream>
#include<vector>
#include<queue>
#include "tree.h"
using namespace std;

vector<vector<int>> levelOrder(TreeNode *root){
    queue<TreeNode*> q;
    if(root!=NULL) q.push(root);
    vector<vector<int>> res;
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode *node=q.front();
            q.pop();
            level.push_back(node->val);
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }
        res.push_back(level);
    }
    return res;
}