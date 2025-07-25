#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to search for a value in the linked list
void search(struct Node* head, int value) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value %d found in the linked list.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Value %d not found in the linked list.\n", value);
}

int main() {
    // Creating a simple linked list: 10 -> 20 -> 30
    struct Node n1 = {10, NULL};
    struct Node n2 = {20, NULL};
    struct Node n3 = {30, NULL};
    n1.next = &n2;
    n2.next = &n3;

    int value;
    printf("Enter value to search: ");
    scanf("%d", &value);

    // Call the search function
    search(&n1, value);

    return 0;
}
