//deletion in ll 
//begin , end , any place , any value
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

void print(node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
node* del(node* head){
    if(head == NULL) return head;
    node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
node* delTail(node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    node* temp = head;
    while(temp->next->next != NULL){
      
       temp = temp->next;

    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
node *  del_k(node* head , int k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
        return del(head);
    }
   node* temp = head;
   node* prev = NULL;
   int cnt = 0;

   while(temp != NULL){
    cnt++;
    if(cnt == k){
    prev->next = prev->next->next;
    free(temp);    
    break;
    }
    prev = temp;
    temp= temp->next;
   }
return head;
}
node *  del_V(node* head , int el){
    if(head == NULL){
        return head;
    }
    if(head->data == el){
        return del(head);
    }
   node* temp = head;
   node* prev = NULL;
   while(temp != NULL){
   
    if(temp->data == el){
    prev->next = prev->next->next;
    free(temp);    
    break;
    }
    prev = temp;
    temp= temp->next;
   }
return head;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,6,8,2,3,1};
    node* head = covertArrToLL(arr);
    head = del(head);
    print(head);
    cout<<endl;
    head = delTail(head);
    print(head);
    head = del_k(head, 2);
    print(head);
    head = del_V(head, 2);
    print(head);
    return 0;
}
