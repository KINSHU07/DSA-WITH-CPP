#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // constructor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~node() {
        int val = this->data;
        cout << "Memory is free for node with data " << val << endl;
    }
};

void insertnode(node*& tail, int element, int d) {
    // empty list
    if (tail == NULL) {
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    } else {
        // non-empty list, assume element present
        node* curr = tail;
        while (curr->data != element) {
            curr = curr->next;
        }

        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    node* curr = tail;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != tail);
    cout << endl;
}

int main() {
    node* tail = NULL;

    insertnode(tail, 3, 4);   // first node, since list is empty
    print(tail);

    insertnode(tail, 4, 6);
    insertnode(tail, 6, 8);
    insertnode(tail, 8, 10);
    print(tail);

    return 0;
}
