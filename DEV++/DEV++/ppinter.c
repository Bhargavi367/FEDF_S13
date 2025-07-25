#include<stdio.h>
int main()
{
	int a=42;
	printf("the value of a %d\n",a);
	printf("the address of a %p\n",a);
	int*p= &a;
	printf("the value of p is %p\n",p);
	printf("the value pointed to by p is %d\n",p);
	*p=1337;
	printf("the value of a is now %d\n",a);
	printf("the value pointed to by p is %d\n",p);
}
	
