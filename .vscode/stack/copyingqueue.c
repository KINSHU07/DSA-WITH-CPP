#include <stdio.h>
#define MAX 100

int queue1[MAX], queue2[MAX];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

// Enqueue function
void enqueue(int queue[], int *front, int *rear, int value) {
    if (*rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (*front == -1)
        *front = 0;
    queue[++(*rear)] = value;
}

// Dequeue function
int dequeue(int queue[], int *front, int *rear) {
    if (*front == -1 || *front > *rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[(*front)++];
}

// Function to copy queue1 into queue2
void copyQueue() {
    if (front1 == -1) {
        printf("Queue 1 is empty, nothing to copy.\n");
        return;
    }
    for (int i = front1; i <= rear1; i++) {
        enqueue(queue2, &front2, &rear2, queue1[i]);
    }
}

// Display queue
void display(int queue[], int front, int rear) {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int n, val;

    printf("Enter number of elements in queue 1: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        enqueue(queue1, &front1, &rear1, val);
    }

    printf("Queue 1: ");
    display(queue1, front1, rear1);

    copyQueue();

    printf("Queue 2 (copied): ");
    display(queue2, front2, rear2);

    return 0;
}
