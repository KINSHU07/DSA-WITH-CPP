//reverse a linked list

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int data1){
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

node * reverse(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev = NULL;
    node* temp = head;
    while(temp!= NULL){
        node * newnode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = newnode;
    }
    return prev;
}
void print(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    node* newnode = new node(1);
    // newnode->next = new node(2);
    // newnode->next->next = new node(3);
    // newnode->next->next->next = new node(4);

    newnode = reverse(newnode);
    print(newnode);
    return 0;
}
