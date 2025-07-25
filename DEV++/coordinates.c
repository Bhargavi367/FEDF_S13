#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x and yco ordinates");
	
	scanf("%d", &x);
	scanf("%d", &y);
	if(x>0 && y>0)
	{
		printf("it is in the first quadrant\n");
	}
	else if(x<0 && y>0)
	{
		printf("it is in the second quadrant\n");
	}
	else if(x<0 && y<0)
	{
		printf("it is in the third quadrant\n");
	}
	else if(x>0 && y<0)
	{
		printf("it is in the fourth quadrant\n");
	}
	else
	{
		printf("the point is in the axes\n");
	}
	return 0;
}