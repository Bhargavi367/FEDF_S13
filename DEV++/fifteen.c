#include<stdio.h>
int main()
{
	int number;
	printf("enter number:");
	scanf("%d", &number);
	printf("the digit in the units place is: %d\n",number % 10);
	return 0;
	
}