#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("value of a=%d and value of b=%d before swap\n",a,b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("value of a=%d and value of b=%d after swap\n",a,b);
	return 0;
}