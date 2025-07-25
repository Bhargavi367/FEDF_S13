#include<stdio.h>

void main()
{
 int n, i, j, check, A[1000], k=0, count =0;
 scanf("%d", &n );
 for (i=2; i<=n; i++)
    {
  check=1; 
 
  for(j=2; j<=i/2; j++)
      if (i%j==0)
     { check = 0;    
        break;    
     }
     
  if (check ==1)   
  {
    A[k] =i;
    k++;

     }
 }
 

 
 for(i=2; i<k; i++)
 {
  int sum = 0;
  for (j = 0; j<k; j++)
  {
   sum = sum + A[j];
   if (sum == A[i])
   {
    count++;
    break;
   }
   if (sum > A[i])
   {
    break;
    }  
  }
 }
 printf("%d", count);

}