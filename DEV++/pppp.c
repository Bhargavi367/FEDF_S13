
#include <stdio.h>

int main() {
    int num, i, highest = 0, secondHighest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            if (i > highest) {
                secondHighest = highest;
                highest = i;
            } else if (i > secondHighest) {
                secondHighest = i;
            }
        }
    }

    printf("\nThe second highest factor is: %d\n", secondHighest);

    return 0;
}
