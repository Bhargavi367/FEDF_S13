#include<stdio.h>
int main()
{
	float n,p,d,t;
	p=200;
	printf("enter the value of n");
	scanf("%f",&n);
	if(n<=3)
{
	printf("get no discount",d=0);
}
else if(n<=6)
{
	printf(" get 10% discount",d=10);
}
else if(n>7)
{
	printf("get 15% discount",d=15);
}
    t=(p-p*d/100)*n;
    printf("%f",t);
    return 0;
}