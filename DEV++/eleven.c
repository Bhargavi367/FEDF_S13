#include<stdio.h>
int main()
{
	int num,orginalnum,rev;
	printf("enter the num");
	scanf("%d",&num);
	orginalnum=num;
	while(num != 0)
	{
		
		rev=num%10+num;
		num/=10;
	}
	if(rev=num)
	{
		printf("the given number is palindrome");
	}
	else
	{
		printf("the given number is not an palindrome");
	}
	return 0;
}