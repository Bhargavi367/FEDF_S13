#include<stdio.h>
int main()
{
	int a,b,c,d,e,s,avg;
	printf("enter the marks of a");
	scanf("%d",&a);
    printf("enter the marks of b");
	scanf("%d",&b);
	printf("enter the marks of c");
	scanf("%d",&c);
	printf("enter the marks of d");
	scanf("%d",&d);
	printf("enter the value of e");
	scanf("%d",&e);
	s = a+b+c+d+e;
	avg=(s/500)*100;
	if(avg>85)
{
	printf("grade A++");
}
else if(avg<70 && avg<85)
{
	printf("grade A");
}
else if(avg>60 && avg<70)
{
	printf("grade B");
}

else if(avg>50 && avg<60)
{
	printf("grade C");
}
else if(avg<50)
{
	printf("fail");
}
return 0;



}