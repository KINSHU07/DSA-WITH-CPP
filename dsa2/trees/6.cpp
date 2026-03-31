//top view of binary tree

#include<bits/stdc++.h>
using namespace std;

struct Treenode{
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int x){
        val = x;
        left = NULL;
        right = NULL;

    }
};

vector<int> topview(Treenode* root){
    vector<int> ans;
    if(root == NULL) return ans;

    map<int,int> mp;
    queue<pair<Treenode*, int>> q;
    q.push({root, 0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        Treenode* node = it.first;
        int hd = it.second;

        if(mp.find(hd) == mp.end()){
            mp[hd] = node->val;
        }

        if(node->left != NULL) q.push({node->left, hd-1});
        if(node->right != NULL) q.push({node->right, hd+1});
        

    }

    for(auto it: mp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    Treenode * root = new Treenode(1);


    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->right = new Treenode(4);
    root->left->right->right = new Treenode(5);
    root->left->right->right->right = new Treenode(6);

    vector<int> result = topview(root);

    cout << "Top View: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
