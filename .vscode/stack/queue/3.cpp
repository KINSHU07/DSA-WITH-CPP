//queue using array
#include <stdio.h>
#include <stdlib.h>

// Queue structure
typedef struct {
    int* arr;
    int front;
    int rear;
    int capacity;
} Queue;



// Initialize the queue
void initialize(Queue* q, int size) {
    q->capacity = size;
    q->arr = (int*)malloc(sizeof(int) * size);
    q->front = 0;
    q->rear = -1;
}

// Check if queue is full
int isFull(Queue* q) {
    return q->rear == q->capacity - 1;
}

// Check if queue is empty
int isEmpty(Queue* q) {
    return q->front > q->rear;
}

// Enqueue an element
void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }
    q->rear++;
    q->arr[q->rear] = value;
}

// Dequeue an element
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    return q->arr[q->front++];
}

// Print queue from front to rear
void print(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (front to rear): ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }

    printf("\n");
}


void revPrint(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (rear to front): ");
    for (int i = q->rear; i >= q->front; i--) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}


void freeQueue(Queue* q) {
    free(q->arr);
    q->arr = NULL;
    q->front = 0;
    q->rear = -1;
    q->capacity = 0;
}
int main() {
    Queue q;
    initialize(&q, 10);  // Initialize with capacity 10

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);

    print(&q);      // Output: 10 20 30 40
    revPrint(&q);   // Output: 40 30 20 10

    dequeue(&q);    // Removes 10
    dequeue(&q);    // Removes 20

    print(&q);      // Output: 30 40

    freeQueue(&q);  // Clean up

    return 0;
}
