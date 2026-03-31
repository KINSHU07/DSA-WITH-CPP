//convert array into linkedlist

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data1, node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node * covertArrToLL(vector<int> arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}
int length( node * head){
    int cnt = 0 ;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool searchInLL(node* head, int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,6,8};
    node* head = covertArrToLL(arr);
    cout<<head->data<<endl;

    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
cout<<endl;

cout<<length(head);
cout<<endl;

cout<<searchInLL(head, 12);


    return 0;
}
