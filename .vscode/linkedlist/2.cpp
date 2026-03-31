#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = NULL;
    }

    void pushfront(int val) {
        node* newnode = new node(val);

        if (head == NULL) {   // empty list
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }



    void pushback(int val){
        node *newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        } else{
            tail->next = newnode;
            tail = newnode;
        }


    }

    void popfront(){
        if(head == tail){
            cout<<"list is empty";
            return;
        }
        node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void popback(){
        if(head == tail){
            cout<<"list is empty";
            return;
        }

        node*temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){
        if(pos <0){
            cout<<"invalid position";
            return;
        }

        if(pos == 0 ){
            pushfront(val);
            return;
        }

        node* temp = head;
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        node *newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }

    int search(int key){
        node*temp = head;
        int idx=0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void print() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    list l1;
    l1.pushfront(3);
    l1.pushfront(1);
    l1.pushfront(2);
    l1.pushfront(30);
    l1.pushback(90);


    l1.print();
    l1.popfront();
    l1.print();
    l1.popback();
    l1.print();
    l1.insert(8, 1);
    l1.print();
    cout<<l1.search(2);
    return 0;
}
