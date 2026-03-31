// boundary order traversal

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isLeaf(Node* node) {
    return (node->left == NULL && node->right == NULL);
}

void leftBoundary(Node* root, vector<int>& ans) {
    Node* curr = root->left;
    while (curr != NULL) {
        if (!isLeaf(curr))
            ans.push_back(curr->data);

        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void leafNodes(Node* root, vector<int>& ans) {
    if (root == NULL) return;

    if (isLeaf(root)) {
        ans.push_back(root->data);
        return;
    }

    leafNodes(root->left, ans);
    leafNodes(root->right, ans);
}

void rightBoundary(Node* root, vector<int>& ans) {
    Node* curr = root->right;
    vector<int> temp;

    while (curr != NULL) {
        if (!isLeaf(curr))
            temp.push_back(curr->data);

        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    // reverse order
    for (int i = temp.size() - 1; i >= 0; i--) {
        ans.push_back(temp[i]);
    }
}

vector<int> boundaryTraversal(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    // 1. root
    if (!isLeaf(root))
        ans.push_back(root->data);

    // 2. left boundary
    leftBoundary(root, ans);

    // 3. leaf nodes
    leafNodes(root, ans);

    // 4. right boundary
    rightBoundary(root, ans);

    return ans;
}

int main() {
    /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = boundaryTraversal(root);

    for (int x : result)
        cout << x << " ";

    return 0;
}
