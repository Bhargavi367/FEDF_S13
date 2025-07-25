#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n :");
	scanf("%d",&n);
	int f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	
	}
	printf("\n factorial is %d",f);
	return 0;
}