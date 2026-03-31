#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *ptr;

    // Constructor
    node(int data){
        this->data = data;
        this->ptr = NULL;
    }

    //destructor
    ~node(){
        int value = this->data;
        if(this->ptr !=NULL){
            delete ptr;
            this->ptr = NULL;
        }
        cout<<"memory is free for data "<<value<<endl;
    }
};

void insertathead(node* &head, int d){
    node* temp = new node(d);
    temp->ptr = head;
    head = temp;
}

void insertattail(node* &tail, int d){
    node* temp = new node(d);
    tail->ptr = temp;   // link old tail to new node
    tail = temp;        // update tail to new node
}


void insertatposition(node* head,node* tail , int position , int d){
    node * temp = head;
    int cnt = 1;
    if(position== 1){
        insertathead(head, d);
        return;
    }
    if(temp->ptr == NULL){
        insertattail(tail , d);
    return;
}
    while(cnt < position -1){
        temp = temp->ptr;
        cnt++;
    }
    //create a node for d

    node* insert = new node(d);
    insert->ptr = temp->ptr;
    temp->ptr = insert;


}



void deletenode(int pos, node*head){
    if(pos == 1){
        node*temp = head;
        head = head->ptr;
        temp->ptr = NULL;
        delete temp;
    }else{
        node * curr = head;
        node* prev = NULL;
        int cnt =1;

        while(cnt <= pos){
            prev = curr;
            curr = curr->ptr;
            cnt++;

        }
    prev->ptr = curr->ptr;
    curr->ptr= NULL;
    delete curr;
    }
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->ptr;
    }
    cout << endl;
}

int main(){
    node *node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->ptr << endl;

    node* head = node1;
    node* tail = node1;   // initially both head and tail point to first node

    print(head);
    insertathead(head , 12);
    print(head);

    insertattail(tail, 122);
    print(head);

    insertattail(tail, 50);
    print(head);

    insertatposition(head,tail , 2,22);
    print(head);
    deletenode(2,head);
    print(head);

    return 0;
}
