#include <stdio.h>

// Function to perform linear search
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {5, 9, 2, 4, 8};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int index = linear_search(arr, size, target);
    
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
