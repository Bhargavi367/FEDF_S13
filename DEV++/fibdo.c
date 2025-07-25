#include<stdio.h>
int main(){
	int n,m=0,r=1,q;
	scanf("%d",&n);
	int i=2;
		printf("%d %d ",m,r);
	do 
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
	while(i!=n);
}