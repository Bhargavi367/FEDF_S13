#include<stdio.h>
int main()
{
	int i=1,n,l,sum=0;
	printf("enter N:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("enter element");
		scanf("%d",&l);
		sum=sum+l;
		i++;
	}
	printf("%d",sum);
}