#include<stdio.h>
int main()
{
	int r,c,a[10][10],t[10][10],i,j;
	printf("Enter rows and col of a");
	scanf("%d %d",&r,&c);
	printf("Enter matrix1 elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d ",&a[i][j]);
		}
	}
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
     	}
    }
     for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",t[j][i]);
     	}
     	printf("\n");
    }
    return 0;
}