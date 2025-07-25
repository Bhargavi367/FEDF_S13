#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x");
	scanf("%d",&x);
    if(x>80 && x<=100)
{
	printf("optimal");
}
else
{
	printf("not optimal");
}
return 0;
}