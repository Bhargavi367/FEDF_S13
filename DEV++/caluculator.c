#include<stdio.h>
int main()
{
	int a,b,c,r;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("enter your operation\n");
	printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: r=a+b; break;
		case 2: r=a-b; break;
		case 3: r=a*b; break;
		case 4: r=a/b; break;
	}
	printf("result=%d",r);
}