#include<stdio.h>
int main()
{
	int i=10;
	int k=5;
	int t=2;
	int u=3;
	float H = (i++ *k--) + t/u % 5;
	printf("%f",H);
	return 0;
}