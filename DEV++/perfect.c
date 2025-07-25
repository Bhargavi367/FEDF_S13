#include <stdio.h>

int main() {
    int num, sum = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding divisors and calculating their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Checking if the sum of divisors is equal to the number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}