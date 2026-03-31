//queue using stack
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

void push(Stack* s, int val) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++(s->top)] = val;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

typedef struct QueueUsingStacks {
    Stack s1;
    Stack s2;
} QueueUsingStacks;

void initQueue(QueueUsingStacks* q) {
    initStack(&q->s1);
    initStack(&q->s2);
}

void enqueue(QueueUsingStacks* q, int val) {
    push(&q->s1, val);
    printf("Enqueued: %d\n", val);
}

int dequeue(QueueUsingStacks* q) {
    if (isEmpty(&q->s2)) {
        // Transfer all elements from s1 to s2
        while (!isEmpty(&q->s1)) {
            int val = pop(&q->s1);
            push(&q->s2, val);
        }
    }

    if (isEmpty(&q->s2)) {
        printf("Queue is empty\n");
        return -1;
    }

    int val = pop(&q->s2);
    printf("Dequeued: %d\n", val);
    return val;
}

int main() {
    QueueUsingStacks q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 40);
    dequeue(&q);
    dequeue(&q);

    dequeue(&q); // empty now

    return 0;
}
