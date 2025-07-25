
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5 


typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;


void initializeQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}


bool isFull(CircularQueue *q) {
    return (q->front == 0 && q->rear == MAX_SIZE - 1) || (q->rear == (q->front - 1) % (MAX_SIZE - 1));
}


bool isEmpty(CircularQueue *q) {
    return q->front == -1;
}


void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else if (q->rear == MAX_SIZE - 1 && q->front != 0) {
        q->rear = 0; 
    } else {
        q->rear++;
    }

    q->items[q->rear] = value;
    printf("Enqueued %d\n", value);
}


int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    int value = q->items[q->front];
    if (q->front == q->rear) {
       
        q->front = q->rear = -1;
    } else if (q->front == MAX_SIZE - 1) {
        q->front = 0; // Wrap around to the beginning
    } else {
        q->front++;
    }

    printf("Dequeued %d\n", value);
    return value;
}

// Function to display the queue
void displayQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    if (q->rear >= q->front) {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    } else {
        for (int i = q->front; i < MAX_SIZE; i++) {
            printf("%d ", q->items[i]);
        }
        for (int i = 0; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); 
    
    

    displayQueue(&q);

    dequeue(&q);
    dequeue(&q);

    displayQueue(&q);

    enqueue(&q, 60); 
    enqueue(&q, 70); 

    displayQueue(&q);

    return 0;
}

