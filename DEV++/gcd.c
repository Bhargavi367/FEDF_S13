#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a :");
	printf("enter b :");
	scanf("%d", &a);
	scanf("%d", &b);
	while( a!=b){
		if(a>b)
		{
			a-=b;
		}
		else
		{
			b-=a;
		}
	}
	printf("gcd of a and b:%d\n",a);
	return 0;
}