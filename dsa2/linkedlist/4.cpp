//double ll insertion

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

// convert array to doubly linked list
node* convertArrToDLL(vector<int> arr){
    if(arr.size() == 0) return NULL;

    node* head = new node(arr[0]);
    node* temp = head;

    for(int i = 1; i < arr.size(); i++){
        node* newNode = new node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
    return head;
}

// print DLL
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
    if(head != NULL){
        head->prev = temp;
    }
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
    temp->prev = cur;
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
        newNode->prev = temp;

        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    return head;
}

// insert after a given value
node* insertAfterValue(node* head, int el, int val){
    node* temp = head;

    while(temp != NULL){
        if(temp->data == el){
            node* newNode = new node(val);
            newNode->next = temp->next;
            newNode->prev = temp;

            if(temp->next != NULL){
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,3,6,8};
    node* head = convertArrToDLL(arr);
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
