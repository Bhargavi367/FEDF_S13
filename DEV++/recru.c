#include<stdio.h>
int sum(int n)
	else
	return n+sum(n-1);
}
int main()

{
	if(n<=0)
	return 0;
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	if(n<0)
	printf("Sum is not defined for negative numbers");
	else
	printf("Sum is %d",sum(n));
}