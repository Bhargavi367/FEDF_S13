#include<stdio.h>
int greater(int,int);
int main()
{
	int a=30;
	int b=20;
	int r = greater(a,b);
	printf("greater=%d",r);
	if(a>b)
{
	printf("a is greater");
}
else
{
	printf("b is greater");
}

}