#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	if((n & n-1 )== 0)
{
	printf("n is power of two");
}
else
{
	printf("n is not the power of two");
}
return 0;
}
