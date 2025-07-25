#include <stdio.h>

int main() {
    int num,i,j,isPrime = 1,prevPrime=0,nextPrime=0;
    printf("Enter num: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number %d is not a prime number.\n", num);
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("The number %d is a prime number.\n", num);
    } else {
        printf("The number %d is not a prime number.\n", num);
    }

    for (i = num - 1; i > 1; i--) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            prevPrime = i;
            break;
        }
    }

    for (i = num + 1;; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            nextPrime = i;
            break;
        }
    }

    int s = (prevPrime + nextPrime) / 2;
    if (s == num) {
        printf("The number %d is a balanced prime number.\n", num);
    } else {
        printf("The number %d is not a balanced prime number.\n", num);
    }

    return 0;
}
