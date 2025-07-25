#include<stdio.h>
int main()
{
	int i,j;
	int n=5;
	printf("\nnumberpatterns\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		printf("%d",j);
	}
	printf("\n");
	}
	printf("\nalphabetpattern\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
		printf("%c",'A'+j-1);
	}
	printf("\n");
	}
	printf("\nspecialpattern\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
		printf("* ");
	}
	printf("\n");
	}
	
	return 0;
}