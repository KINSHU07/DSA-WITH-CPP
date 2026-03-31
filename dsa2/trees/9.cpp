// lowest common ansector

#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    bool getPath(TreeNode* root, vector<TreeNode*>& arr, TreeNode* x){
        if(root == NULL){
            return false;
        }

        arr.push_back(root);

        if(root == x){
            return true;
        }

        if(getPath(root->left, arr, x) || getPath(root->right, arr, x)){
            return true;
        }

        arr.pop_back();
        return false;
    }

    vector<TreeNode*> sol(TreeNode* root, TreeNode* x){
        vector<TreeNode*> arr;

        if(root == NULL){
            return arr;
        }

        getPath(root, arr, x);
        return arr;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> a = sol(root, p);
        vector<TreeNode*> b = sol(root, q);

        int n = min(a.size(), b.size());
        int i = 0;

        while(i < n && a[i] == b[i]){
            i++;
        }

        return a[i-1];
    }
};
