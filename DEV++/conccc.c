#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int i, j, n = 20, sum, count;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Primes in range where sum is also prime:\n");

    for (i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum = 0;
            count = 0;
            for (j = i; count < 20 && j <= n; j++) {
                if (isPrime(j)) {
                    sum += j;
                    count++;
                    if (isPrime(sum)) {
                        printf("Prime: %d, Sum: %d\n", i, sum);
                    }
                }
            }
        }
    }

    return 0;
}
