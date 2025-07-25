#include<stdio.h>
int main()
{
	int n,x,y;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the value of x");
	scanf("%d",&x);
	printf("Enter the value of y");
	scanf("%d",&y);
	if(n==x*y)
{
	printf("Chef can complete");
}
	else if (n!=x*y)
{
		printf("Chef cannot complete");
}
    return 0;
}