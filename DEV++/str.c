#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;
printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
printf("Count of uppercase letters: %d\n", count);
    return 0;
}
