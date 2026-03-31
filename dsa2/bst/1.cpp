//inorder successor 
#include <bits/stdc++.h>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    // Inorder traversal to store BST elements in sorted order
    void inorder(vector<int>& arr, TreeNode* root) {
        if (root == NULL) return;
        inorder(arr, root->left);
        arr.push_back(root->val);
        inorder(arr, root->right);
    }

    // Function to find predecessor and successor
    vector<int> succPredBST(TreeNode* root, int key) {
        vector<int> arr;
        inorder(arr, root);

        // ans[0] = predecessor, ans[1] = successor
        vector<int> ans(2, -1);

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == key) {
                if (i > 0)
                    ans[0] = arr[i - 1];     // predecessor
                if (i < arr.size() - 1)
                    ans[1] = arr[i + 1];     // successor
                break;
            }
        }
        return ans;
    }
};

// Helper function to insert node in BST
TreeNode* insertBST(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);

    return root;
}

int main() {
    Solution sol;

    TreeNode* root = NULL;

    // Creating BST
    vector<int> values = {20, 8, 22, 4, 12, 10, 14};
    for (int x : values)
        root = insertBST(root, x);

    int key = 10;

    vector<int> result = sol.succPredBST(root, key);

    cout << "Predecessor: " << result[0] << endl;
    cout << "Successor: " << result[1] << endl;

    return 0;
}
