#include<stdio.h>
int main()
{
	
		int a[2][2],b[2][2],r,c,s[2][2];
	printf("enter elements into a matrix \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		scanf("%d",&a[r][c]);
	}
	printf("enter elements into b matrix \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		scanf("%d",&b[r][c]);
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
	s[r][c]=a[r][c]+b[r][c];
	
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
	    printf("%d\t",s[r][c]);
     printf("\n");	
}
return 0;

}