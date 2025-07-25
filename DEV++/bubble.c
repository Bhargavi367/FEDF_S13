#include <stdio.h>

          int main() 
                {
                   int n, i, j, temp,a[10];
                  printf("Enter number of elements: ");
                  scanf("%d", &n);
                  printf("To read the array values");
                 for (i = 0; i < n; i++) 
                 {
                    scanf("%d", &a[i]);
                  }
                for (i = 0; i < n-1; i++)   // n=5  i<4
                  {
                     for (j = 0; j < n-i-1; j++) // j<5-0-1 
                      {
                       if (a[j] > a[j+1])  // a[0]>a[1]
                       {
                          // Swap the elements
                            temp = a[j];
                           a[j] = a[j+1];
                            a[j+1] = temp;
                       }
                    }
                 }

        printf("Sorted array: ");
        for (i = 0; i < n; i++) {
           printf("%d ", a[i]);
             }

          return 0;
      }