// add two numbers
//tc = o(max(N1, N2))
//SPACE COMPLEXITY = O(MAX(N1, N2) FOR STORING RESULT 
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

// print DLL
void print(node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

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

node * add(node* head1 , node* head2){
    node* t1 = head1;
    node* t2 = head2;
    node* dummy = new node(-1);
    node * curr = dummy;
    int carry = 0;
    while(t1!= NULL || t2 != NULL){
        int sum = carry;
        if(t1) sum = t1->data + sum;
        if(t2) sum = t2->data + sum;

        node * newnode = new node(sum% 10);
        carry = sum/10;
        curr->next = newnode;

        curr = curr->next;
        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;


    }
    if(carry){
        node * nede = new node(carry);
        curr->next = nede;
    }
    return dummy->next;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,1,5};
    vector<int> brr = {2,2,3};
    node* head = covertArrToLL(arr);
    print(head);
    node* head1 = covertArrToLL(brr);
    print(head1);
    
    head = add(head, head1);
    print(head);
    return 0;
}
