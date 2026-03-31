//balanced binary tree or not

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
int maxdepth(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int hf = maxdepth(root->left);
    if(hf == -1) return -1;
    int rf = maxdepth(root->right);
    if(rf == -1 ) return -1;

     if(abs(hf - rf) > 1) return false;
    return 1+max(hf,rf);
}
    bool isBalanced(TreeNode* root) {
       return maxdepth(root) != -1;
    }
};

