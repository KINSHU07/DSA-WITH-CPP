#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int isempty(struct node* top){
    if(top == NULL){
        return 1;
    } else{
        return 0;
    }
}


int isfull(struct node* top){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if(p== NULL){
        return 1;
    } else{
        return 0;
    }
}

void traverse(struct node *ptr){
    while(ptr != NULL){
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node* push(struct node* top,int x){
    if(isfull(top)){
        printf("stack overflow");
    } else{
        struct node* n = (struct node*) malloc(sizeof(struct node));
        n->data = x;
        n->next= top;
        top = n;
        return n;
    }
}

int peek(struct node* top,int pos){
    struct node* ptr = top;
    for(int i = 0; (i<pos-1 && ptr!= NULL); i++){
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    } else{
        return -1;
    }
    
}
int pop(struct node** top){
    if(isempty((*top))){
        printf("stack under flow");
    } else{
    struct node* n = (*top);
    (*top) = (*top)->next;
    int x= n->data;
    free(n);
   return x;

    }
}
void reverseTraverse(struct node* ptr) {
    if (ptr == NULL)
        return;
    reverseTraverse(ptr->next);
    printf("ELEMENT: %d\n", ptr->data);
}
int main(int argc, char const *argv[])
{
    struct node* top = NULL;
   top = push(top,12);
    top = push(top,1);
    top = push(top,2);
    top = push(top,112);

 int element = pop(&top);
    traverse(top);
reverseTraverse(top);
    printf("%d", peek(top, 2));
    return 0;
}
