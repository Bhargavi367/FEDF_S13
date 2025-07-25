#include <stdio.h>

int main() {
    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    int result = a & b; // Perform bitwise AND operation

    printf("a & b = %d\n", result); // Output the result

    return 0;
}
