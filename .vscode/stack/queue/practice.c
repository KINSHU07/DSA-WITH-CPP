#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int queue[MAX];
int front = -1, rear = -1;

int is_empty() {
    return (front == -1 || front > rear);
}

int is_full() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (is_full()) {
        printf("QUEUE IS FULL\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
       // printf("%d enqueued\n", value);
    }
}

void dequeue() {
    if (is_empty()) {
        printf("QUEUE IS EMPTY\n");
    } else {
        printf("%d dequeued\n", queue[front]);
        front++;
    }
}

void peek() {
    if (is_empty()) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

void display() {
    if (is_empty()) {
        printf("Queue is EMPTY\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    peek();

    return 0;
}
