#include<stdio.h>
int main()
{
	int number,sum=0;
	printf("enter number:");
	scanf("%d",&number);
	for(int i=1;i<=number/2;i++)
	{
		if(number%i==0)
		sum+=i;
	}
	if(sum == number)
	{
		printf("the number is perfect number");
	}
	else
	{
		printf("the number is not a perfect number");
	}
	return 0;
}