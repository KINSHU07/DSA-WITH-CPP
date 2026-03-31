//insertion in LL 

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = nullptr;
    }
};

// convert array to linked list
node* covertArrToLL(vector<int> arr){
    if(arr.size() == 0) return NULL;

    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// print linked list
void print(node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// insert at beginning
node* insertBegin(node* head, int val){
    node* temp = new node(val);
    temp->next = head;
    return temp;
}

// insert at end
node* insertEnd(node* head, int val){
    node* temp = new node(val);
    if(head == NULL) return temp;

    node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = temp;
    return head;
}

// insert at k-th position (1-based)
node* insertK(node* head, int k, int val){
    if(k == 1){
        return insertBegin(head, val);
    }

    node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < k-1){
        temp = temp->next;
        cnt++;
    }

    if(temp != NULL){
        node* newNode = new node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

// insert after given value
node* insertAfterValue(node* head, int el, int val){
    node* temp = head;

    while(temp != NULL){
        if(temp->data == el){
            node* newNode = new node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,3,6,8};
    node* head = covertArrToLL(arr);
    print(head);

    head = insertBegin(head, 10);
    print(head);

    head = insertEnd(head, 20);
    print(head);

    head = insertK(head, 3, 15);
    print(head);

    head = insertAfterValue(head, 6, 99);
    print(head);

    return 0;
}
