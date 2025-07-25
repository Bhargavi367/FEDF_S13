#include<stdio.h>
int main()
{
	int m,i,j;
	printf("enter m");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		for(j=0;j<=i;j++)
		printf("m\n");
	}
	return 0;
}