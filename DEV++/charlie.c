#include<stdio.h>
int main()
{
	int A;
	printf("enter the value of A");
	scanf("%d",&A);
	if(A%2==0 && A%7==0)
{
	printf("Alice like the number");
}
else if(A%3==0 && A%9==0)
{
	printf("Bob like the number");
}
else 
{
	printf("Charlie like the number");
}
return 0;
}