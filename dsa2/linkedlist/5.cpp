//double ll deletion

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

// delete at beginning
node* delBegin(node* head){
    if(head == NULL) return NULL;

    node* temp = head;
    head = head->next;

    if(head != NULL){
        head->prev = NULL;
    }
    delete temp;
    return head;
}

// delete at end
node* delEnd(node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
    return head;
}

// delete k-th position (1-based)
node* delK(node* head, int k){
    if(head == NULL) return NULL;

    if(k == 1){
        return delBegin(head);
    }

    node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < k){
        temp = temp->next;
        cnt++;
    }

    if(temp != NULL){
        if(temp->next != NULL){
            temp->next->prev = temp->prev;
        }
        if(temp->prev != NULL){
            temp->prev->next = temp->next;
        }
        delete temp;
    }
    return head;
}

// delete by value (first occurrence)
node* delByValue(node* head, int val){
    if(head == NULL) return NULL;

    if(head->data == val){
        return delBegin(head);
    }

    node* temp = head->next;

    while(temp != NULL){
        if(temp->data == val){
            if(temp->next != NULL){
                temp->next->prev = temp->prev;
            }
            temp->prev->next = temp->next;
            delete temp;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,3,6,8,2,3,1};
    node* head = convertArrToDLL(arr);
    print(head);

    head = delBegin(head);
    print(head);

    head = delEnd(head);
    print(head);

    head = delK(head, 3);
    print(head);

    head = delByValue(head, 2);
    print(head);

    return 0;
}
