#include<stdio.h>
int big(int,int);
int main()
{
	int a=30;
	int b=20;
	int r =big(a,b);
	printf("big=%d",r);
	if(a>b)
{
	printf("a is greater");
}
else
{
	printf("b is greater");
}
return 0;
}