#include<stdio.h>
int main()
{
	int a,b,c=0,n,i;
	printf("enter n terms");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("fibbonoci series:");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a);
		if(c>n)
		break;
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}