#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	if(a%2==0 && b%2==0)
{
	printf("add=%d",a+b);
}
else
{
	printf("a,b are not even");
}
return 0;
}