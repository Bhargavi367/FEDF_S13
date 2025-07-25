#include<stdio.h>
int main()
{
	int number,first,last;
	printf("enter number");
	scanf("%d",&number);
	last = number % 10;
	while(number>=10){
		number/=10;
	}
	first=number;
	printf("the sume of the first and last digit is : %d\n",first+last);
		return 0;
}