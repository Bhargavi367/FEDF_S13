struct humanbeing
{
	int age;
	char *gender;
}p1,p2;
#include<stdio.h>
int main()
{
	p1.age=25;
	p1.gender="MALE";
	p2.age=35;
	p2.gender="FEMALE";
	printf("person1 Details:%d %s\n",p1.age,p1.gender);
	printf("person2 Details:%d %s\n",p2.age,p2.gender);
	return 0;
}