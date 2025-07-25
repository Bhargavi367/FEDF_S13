#include<stdio.h>
int main()
{
  int n;
  printf("enter the value of n");
  scanf("%d",&n);
  if(n<=100)
   {
	printf("bill=%d",n*5);
   }
else if(n<=200)
{
	printf("bill=%d",n*7);
}
else if(n<=300)
{
	printf("bill=%d",n*10);
}
else if(n>300)
{
	printf("bill=%d",n*12);
}
  return 0;
}