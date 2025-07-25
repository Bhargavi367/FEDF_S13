#include<stdio.h>
int main()
{
	int n,a[10],i,j,d=0;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==-1) continue;
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
			  d++;
			  a[j]=-1;
			  break;
	    	}
		}
	}
	printf("duplicates=%d",d);
	return 0;
}