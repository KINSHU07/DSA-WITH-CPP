#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *prev;
    node *next;

    node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memmory free ";
    }
};

void print(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(node *head) {
    node *temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(node* &head, int d) {
    node* temp = new node(d);
    temp->next = head;
    // if(head != NULL) {
    //     head->prev = temp;
    // }
    head->prev = temp;
    head = temp;   // ✅ update head
}


void insertattail(node* &tail, int d){
    node* temp= new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(node* head,node* tail , int position , int d){
    node * temp = head;
    int cnt = 1;
    if(position== 1){
        insertathead(head, d);
        return;
    }
    if(temp->next == NULL){
        insertattail(tail , d);
    return;
    }
    while(cnt < position -1){
        temp = temp->next;
        cnt++;
    }
    //create a node for d

    node* insert = new node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;


}

void deletenode(int pos, node*head){
    if(pos == 1){
        node *temp= head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        node * curr = head;
        node* prev = NULL;
        int cnt =1;

        while(cnt <= pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    
    }
}

int main() {
    node *node1 = new node(10);
    node *head = node1;
    node* tails = node1;

    print(head);
    cout << "Length: " << length(head) << endl;

    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    insertattail(tails, 20);
    insertatposition(head , tails , 2, 100);

    print(head);
    deletenode(3, head);
    print(head);


    cout << "Length: " << length(head) << endl;

    return 0;
}
