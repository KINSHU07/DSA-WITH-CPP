#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int front = -1, rear = -1;
int queue[MAX];

int is_empty() {
    return front == -1;
}

int is_full() {
    return ((rear + 1) % MAX == front);
}

void enqueue(int value) {
    if (is_full()) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

void dequeue() {
    if (is_empty()) {
        printf("Queue is empty\n");
        return;
    }

    int value = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;

    printf("Dequeued: %d\n", value);
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
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(20);
    enqueue(220);
    enqueue(0);
    enqueue(2);
    display();
    dequeue();
    display();
    peek();
    return 0;
}
