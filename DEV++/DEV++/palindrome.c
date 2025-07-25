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
		printf("palindrome");
	}else
	{
		printf("not a palindrome");
	}
	return 0;
}