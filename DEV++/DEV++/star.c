#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j<=i;j++)
		printf("* ");
		printf("\n");
	}
	
	return 0;
}