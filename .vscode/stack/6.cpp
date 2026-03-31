//stack using queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Queue {
    int arr[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue* q) {
    return (q->front == -1);
}

int isFull(Queue* q) {
    return ((q->rear + 1) % MAX == q->front);
}

void enqueue(Queue* q, int val) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = val;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int val = q->arr[q->front];
    if (q->front == q->rear) {
        // Only one element was there
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return val;
}

typedef struct StackUsingQueues {
    Queue q1;
    Queue q2;
} StackUsingQueues;

void initStack(StackUsingQueues* s) {
    initQueue(&s->q1);
    initQueue(&s->q2);
}

void push(StackUsingQueues* s, int val) {
    enqueue(&s->q2, val);

    // Move all elements from q1 to q2
    while (!isEmpty(&s->q1)) {
        enqueue(&s->q2, dequeue(&s->q1));
    }

    // Swap q1 and q2 pointers
    Queue temp = s->q1;
    s->q1 = s->q2;
    s->q2 = temp;

    printf("Pushed: %d\n", val);
}

int pop(StackUsingQueues* s) {
    if (isEmpty(&s->q1)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int val = dequeue(&s->q1);
    printf("Popped: %d\n", val);
    return val;
}

int main() {
    StackUsingQueues s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    pop(&s);
    pop(&s);

    push(&s, 40);
    pop(&s);
    pop(&s);

    pop(&s); // stack empty now

    return 0;
}
