//get path 

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

bool getPath(Treenode* root, vector<int> &arr, int x){
    if(root == NULL){
        return false;
    }

    arr.push_back(root->val);

    if(root->val == x){
        return true;
    }

    if(getPath(root->left, arr, x ) || getPath(root->right, arr, x)){
        return true;
    }

arr.pop_back();
return false;

}

vector<int> sol(Treenode* root, int x){
    vector<int> arr;

    if(root == NULL){
        return arr;
    }
getPath(root, arr, x);
return arr;
}

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

    vector<int> result = sol(root, 6);

    cout << "Bottom View: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
