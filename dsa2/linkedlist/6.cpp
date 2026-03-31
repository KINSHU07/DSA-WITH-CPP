//reverse a double linked list
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

// convert array to DLL
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

node* reverse_DLL(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;

}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,6,8,2,3,1};
    node* head = convertArrToDLL(arr);
    print(head);
    head = reverse_DLL(head);
    print(head);
    return 0;
}
