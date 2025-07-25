#include <stdio.h>

int main() {
    int number, flag = 0;
printf("Enter a number: ");
scanf("%d", &number);

    if (number <= 1) {
printf("The number is not a prime number.\n");
        return 0;
    }

    for (int i = 2; i<= number / 2; i++) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
printf("The number is a prime number.\n");
    else
printf("The number is not a prime number.\n");

    return 0;
}
