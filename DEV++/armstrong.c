#include<stdio.h>
int main()
{
	int num,orginalnum,r,rev=0;
	printf("enter a number");
	scanf("%d",&num);
	orginalnum=num;
	while(num != 0)
	{
		r=num%10;
		rev += (r*r*r);
		num/=10;
	}
	if(rev = orginalnum)
	{
		printf("%d is a armstrong number\n",num);
	}else
	{
		printf("%d is not a armstrong number\n",num);
	}
	return 0;
}