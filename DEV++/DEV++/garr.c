#include<stdio.h>
#include<math.h>
int main(){
	int numofplots,count=0,sqrtvalue,i;
	printf("Enter the numofplots : ");
	scanf("%d",&numofplots);
	int area[numofplots];
	printf("\n Read the areas of the plots : ");
	for(i=0;i<numofplots;i++){
		scanf("%d",&area[i]);
			}
			for(i=0;i<numofplots;i++){
        sqrtvalue = sqrt(area[i]);
        if(sqrtvalue * sqrtvalue == area[i])
        {
        	count++;
		}
	}
	printf("the number of square shaped plots is %d\n",count);
	return 0;
}