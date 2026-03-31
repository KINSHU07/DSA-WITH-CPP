//bottom view
#include <bits/stdc++.h>
using namespace std;

struct Treenode {
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> bottomView(Treenode* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    // map<horizontal_distance, node_value>
    map<int, int> mp;
    queue<pair<Treenode*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto it = q.front();
        q.pop();

        Treenode* node = it.first;
        int hd = it.second;

        // overwrite value for each horizontal distance
        mp[hd] = node->val;

        if (node->left != NULL)
            q.push({node->left, hd - 1});
        if (node->right != NULL)
            q.push({node->right, hd + 1});
    }

    for (auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

// Optional main function for testing
int main() {
    /*
            1
           / \
          2   3
           \
            4
             \
              5
               \
                6

        Bottom View: 2 4 5 6
    */

    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->right = new Treenode(4);
    root->left->right->right = new Treenode(5);
    root->left->right->right->right = new Treenode(6);

    vector<int> result = bottomView(root);

    cout << "Bottom View: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
