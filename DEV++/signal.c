#include<stdio.h>
int main()
{
	char signal;
	printf("enter a signal");
	scanf("%c",&signal);
	switch(signal)
{
	case 'r': 
	printf(" red stop"); break;
	case 'y': 
	printf("yellow get ready to move"); break;
	case 'g': 
	printf("green go"); break;
	default: printf("invalid input");
}
return 0;
}
