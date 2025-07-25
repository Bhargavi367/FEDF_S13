#include<stdio.h>
int main(){
	int n, m=0,r=1,q;
	printf("enter n terms:");
	scanf("%d",&n);
	int i=2;
	printf("%d %d ",m,r);
	while(n != i)
	{
		q=m+r;
		if (q>n){
			break;
		}
	printf("%d ",q);
	m=r;
	r=q;
	i++;
}
}