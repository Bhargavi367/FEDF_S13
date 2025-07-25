#include <stdio.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LENGTH];
    int zero_counts[MAX_STRINGS];
    
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    printf("Enter the binary strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        int max_zeros = 0;
        int count = 0;
        
        for (int j = 0; strings[i][j] != '\0'; j++) {
            if (strings[i][j] == '0') {
                count++;
                if (count > max_zeros) {
                    max_zeros = count;
                }
            } else {
                count = 0;
            }
        }
        zero_counts[i] = max_zeros;
    }
    
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (zero_counts[i] < zero_counts[min_index]) {
            min_index = i;
        }
    }
    
    printf("String with the smallest number of consecutive zeros: %s\n", strings[min_index]);
    
    return 0;
}
