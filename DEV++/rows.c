#include<stdio.h>
int main()
{
	int a[3][3],r,c;
	printf("enter elements\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		scanf("%d",&a[r][c]);
	}
		for(r=0;r<3;r++)
		{
	  for(c=0;c<3;c++)
	scanf("%d",&a[r][c]);
		}
		return 0;
}