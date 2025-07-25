#include<stdio.h>
int main()
{
	int a,b,distance,speed=50;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	distance=speed*2.25;
	printf("%d",&distance);
	if(a>b){
	printf("b is nearest");
}else if(b>a)
{
	printf("a is nearest");
}else
{
	printf("neither a or b");
}
return 0;
}