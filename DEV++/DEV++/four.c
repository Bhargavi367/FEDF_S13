#include<stdio.h>
int main()
{
	int N,k,x;
	printf("enter N");
	scanf("%d",&N);
	if(N%4==0)
{
	k=N-1;
	printf("%d",k);
}
else
{
	x=N+1;
	printf("%d",x);
}
return 0;
}