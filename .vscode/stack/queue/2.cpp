//DEQueue
#include <stdio.h>
#include <stdlib.h>

// Node structure for the DEQueue
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// DEQueue structure with front and rear pointers
typedef struct {
    Node* front;
    Node* rear;
} DEQueue;




// Initialize the DEQueue
void initialize(DEQueue* dq) {
    dq->front = NULL;
    dq->rear = NULL;
}

// Check if DEQueue is empty
int isEmpty(DEQueue* dq) {
    return dq->front == NULL;
}

// Enqueue at front
void enqueueFront(DEQueue* dq, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = dq->front;

    if (isEmpty(dq)) {
        dq->rear = newNode;
    } else {
        dq->front->prev = newNode;
    }
    dq->front = newNode;
}

// Enqueue at back
void enqueueBack(DEQueue* dq, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = dq->rear;

    if (isEmpty(dq)) {
        dq->front = newNode;
    } else {
        dq->rear->next = newNode;
    }
    dq->rear = newNode;
}

// Dequeue from front
int dequeueFront(DEQueue* dq) {
    if (isEmpty(dq)) {
        printf("DEQueue is empty. Cannot dequeue front.\n");
        return -1;
    }

    Node* temp = dq->front;
    int value = temp->data;

    dq->front = dq->front->next;
    if (dq->front)
        dq->front->prev = NULL;
    else
        dq->rear = NULL;

    free(temp);
    return value;
}

// Dequeue from back
int dequeueBack(DEQueue* dq) {
    if (isEmpty(dq)) {
        printf("DEQueue is empty. Cannot dequeue back.\n");
        return -1;
    }

    Node* temp = dq->rear;
    int value = temp->data;

    dq->rear = dq->rear->prev;
    if (dq->rear)
        dq->rear->next = NULL;
    else
        dq->front = NULL;

    free(temp);
    return value;
}

// Print from front to back
void print(DEQueue* dq) {
    if (isEmpty(dq)) {
        printf("DEQueue is empty.\n");
        return;
    }

    printf("DEQueue (front to back): ");
    Node* current = dq->front;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Print from back to front
void revPrint(DEQueue* dq) {
    if (isEmpty(dq)) {
        printf("DEQueue is empty.\n");
        return;
    }

    printf("DEQueue (back to front): ");
    Node* current = dq->rear;
    while (current) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Free all allocated nodes
void freeQueue(DEQueue* dq) {
    Node* current = dq->front;
    while (current) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    dq->front = dq->rear = NULL;
}
int main() {
    DEQueue dq;
    initialize(&dq);

    enqueueBack(&dq, 10);
    enqueueBack(&dq, 20);
    enqueueFront(&dq, 5);
    enqueueFront(&dq, 1);

    print(&dq);      // Output: 1 5 10 20
    revPrint(&dq);   // Output: 20 10 5 1

    dequeueFront(&dq); // Removes 1
    dequeueBack(&dq);  // Removes 20

    print(&dq);      // Output: 5 10

    freeQueue(&dq);  // Clean up

    return 0;
}