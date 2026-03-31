//vertical order traversal

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    map<int, map<int, multiset<int>>> nodes;

    void inorder(TreeNode* root, int row, int col) {
        if (root == NULL) return;

        // Left
        inorder(root->left, row + 1, col - 1);

        // Root
        nodes[col][row].insert(root->val);

        // Right
        inorder(root->right, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        inorder(root, 0, 0);

        vector<vector<int>> ans;

        for (auto col : nodes) {
            vector<int> temp;
            for (auto row : col.second) {
                temp.insert(temp.end(),
                            row.second.begin(),
                            row.second.end());
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
