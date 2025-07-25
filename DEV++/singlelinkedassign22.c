#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to calculate the average of node values in the DLL
float findAverage(struct Node* head) {
    struct Node* temp = head;
    int sum = 0, count = 0;

    while (temp != NULL) {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    return (count == 0) ? 0 : (float)sum / count; // Avoid division by zero
}

int main() {
    // Creating a simple Doubly Linked List: 10 <-> 20 <-> 30
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Calculate the average
    float average = findAverage(head);
    printf("The average of node values is: %.2f\n", average);

    return 0;
}
