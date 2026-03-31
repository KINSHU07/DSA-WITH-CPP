#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List Node
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Insert at end
void insert(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Find tail
Node* findTail(Node* head) {
    Node* tail = head;
    while (tail->next != NULL)
        tail = tail->next;
    return tail;
}

// Find pairs with given sum
vector<pair<int, int>> findPairs(Node* head, int k) {
    vector<pair<int, int>> ans;
    if (head == NULL) return ans;

    Node* left = head;
    Node* right = findTail(head);

    while (left != right && left->data < right->data) {
        int sum = left->data + right->data;

        if (sum == k) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if (sum < k) {
            left = left->next;
        }
        else {
            right = right->prev;
        }
    }

    return ans;
}

// Main function
int main() {
    Node* head = NULL;
    int n, k;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter sorted values:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(head, x);
    }

    cout << "Enter target sum: ";
    cin >> k;

    vector<pair<int, int>> result = findPairs(head, k);

    if (result.empty()) {
        cout << "No pairs found\n";
    } else {
        for (auto p : result) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }

    return 0;
}
