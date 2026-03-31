//circular queue
#include <stdio.h>
#include <stdlib.h>

struct circularQueue {
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct circularQueue *q) {
    return (q->f == q->r);
}

int isfull(struct circularQueue *q) {
    return ((q->r + 1) % q->size == q->f);
}

void enqueue(struct circularQueue *q, int val) {
    if (isfull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", val);
    } else {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q) {
    if (isempty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;  // Error value
    } else {
        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}

// Traverse: front to rear
void traverse(struct circularQueue *q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue (front to rear): ");
    int i = (q->f + 1) % q->size;
    while (i != (q->r + 1) % q->size) {
        printf("%d ", q->arr[i]);
        i = (i + 1) % q->size;
    }
    printf("\n");
}


void reverseTraverse(struct circularQueue *q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue (rear to front): ");
    int i = q->r;
    while (i != q->f) {
        printf("%d ", q->arr[i]);
        i = (i - 1 + q->size) % q->size;  
    }
    printf("\n");
}

int main() {
    struct circularQueue q;
    q.size = 5;          
    q.f = 0;
    q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));
    if (q.arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    enqueue(&q, 12);
    enqueue(&q, 112);
    enqueue(&q, 2);
    enqueue(&q, 1);

    
    enqueue(&q, 99);

    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));

   
    printf("Dequeued element: %d\n", dequeue(&q));

    if (isempty(&q)) {
        printf("Queue is empty\n");
    } else if (isfull(&q)) {
        printf("Queue is full\n");
    } else {
        printf("Queue is neither full nor empty\n");
    }

    free(q.arr);
    return 0;
}
