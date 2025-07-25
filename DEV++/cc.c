#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "rose";
	char str2[] = "rose";
	int result = strcmp(str1, str2);
	printf("%d", result);
	return 0;
}