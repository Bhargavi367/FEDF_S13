#include <stdio.h>

int main() {
    int n;
    printf("Enter elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int rotations = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            rotations = i + 1; 
            break;
        }
    }

    printf("The array is rotated %d times.\n", rotations);
    return 0;
}