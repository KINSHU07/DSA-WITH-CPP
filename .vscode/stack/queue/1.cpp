//queue uisng ll
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


void enqueue(struct node** front, struct node** rear, int value){
    struct node * n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL){
        printf("queue full");
    } else{
        n->data = value;
        n->next = NULL;
        if(*front == NULL){
            *front = *rear = n;
        } else{
            (*rear)->next = n;
            *rear = n;
        }
    }
}

int isempty(struct node* front){
    if(front == NULL){
        return 1;
    } else{
        return 0;
    }
}

int isfull(){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL){
        return 1;
    } else{
        return 0;
    }
}

int dequeue(struct node** front, struct node** rear){
int value = -1;
if(isempty(*front)){
    printf("queue empty");
} else{
    struct node* ptr = *front;
    value = ptr->data;
    *front = (*front)->next;
    free(ptr);
    return value;
}
}
void traverse(struct node* front){
    struct node* ptr = front;
    while(ptr!= NULL){
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void reverseTraverse(struct node* front) {
    if (front == NULL)
        return;
    reverseTraverse(front->next);
    printf("ELEMENT: %d\n", front->data);
}
int main(int argc, char const *argv[])
{
    struct node* front = NULL;
    struct node* rear = NULL;
    dequeue(&front, &rear);

    enqueue(&front,& rear,20);
    enqueue(&front, &rear,220);
    enqueue(&front, &rear,10);
    enqueue(&front, &rear,10);
    traverse(front);
    traverse(front);
    enqueue(&front, &rear,1);
    traverse(front);
    return 0;
}
