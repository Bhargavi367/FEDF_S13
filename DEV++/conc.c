#include<stdio.h>
int main()
{
	int i,n=100,sum,count=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
	     count++;
	}
	while(count<n)
	{
		if(count==0)
		sum += i;
		count++;
	}
	i++;
	printf("sum of consective prime numbers is ",n,sum);
	return 0;
}