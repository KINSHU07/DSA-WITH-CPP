// level order traversal
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Tree node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;
    if (root == NULL) {
        return ans;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> levl;

        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();

            levl.push_back(node->data);

            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        ans.push_back(levl);
    }
    return ans;
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    vector<vector<int>> result = levelOrder(root);

    // Printing result
    for (auto level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
