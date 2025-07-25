#include<stdio.h>
int factorial(int);
int main()
{
	int n,i,f=1;
	printf("enter n values");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
		printf("%d\n",f);
	}
	printf("the factorial of %d is %d",n,f);
	
	factorial(n);
}
int factorial(int a)
{

	return a;
}
