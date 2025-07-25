#include <stdio.h>

int main() {
    int num, originalnum, rotatednum, digitcount = 0, tempnum, isCircularPrime = 1, multiplier;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (num <= 1) {
        printf("The number %d is not a prime number.\n", num);
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("The number %d is not a prime number.\n", num);
            return 0;
        }
    }

    originalnum = num;
    tempnum = num;

    
    while (tempnum != 0) {
        tempnum /= 10;
        digitcount++;
    }

    tempnum = num;

    
    multiplier = 1;
    for (int i = 1; i < digitcount; i++) {
        multiplier *= 10;
    }

 
    for (int i = 0; i < digitcount; i++) {
        rotatednum = (tempnum % 10) * multiplier + tempnum / 10;

       
        if (rotatednum <= 1) {
            isCircularPrime = 0;
            break;
        }
        for (int j = 2; j * j <= rotatednum; j++) {
            if (rotatednum % j == 0) {
                isCircularPrime = 0;
                break;
            }
        }

    
        tempnum = rotatednum;

        if (isCircularPrime == 0) {
            break;
        }
    }

    if (isCircularPrime) {
        printf("The number %d is a circular prime.\n", originalnum);
    } else {
        printf("The number %d is not a circular prime.\n", originalnum);
    }

    return 0;
}
