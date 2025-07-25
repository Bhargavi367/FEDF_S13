#include<stdio.h>
int main()
{
	float s,r,h,p;
	printf("enter r val");
	scanf("%f",&r);
	printf("enter h val");
	scanf("%f",&h);
    s=2*22/7*r*r+2*22/7*r*h;
    printf("f=%f",s);
}