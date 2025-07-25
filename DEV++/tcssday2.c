#include <stdio.h>

#define MAX_NUMBERS 100

int main() {
    int n, l;
    int numbers[MAX_NUMBERS];

    printf("Enter the number of numbers (n): ");
    scanf("%d", &n);

    printf("Enter the number to be subtracted and added (l): ");
    scanf("%d", &l);

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Happy numbers:\n");
    for (int i = 0; i < n; i++) {
        int number = numbers[i];
        int lower_bound = number - l;
        int upper_bound = number + l;
        int is_happy = 0;
        
        for (int j = 0; j < n; j++) {
            if (j != i && numbers[j] >= lower_bound && numbers[j] <= upper_bound) {
                is_happy = 1;
                break;
            }
        }
        
        if (is_happy) {
            printf("%d\n", number);
        }
    }

    return 0;
}