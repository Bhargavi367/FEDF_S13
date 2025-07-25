#include<stdio.h>
struct human being
{
	int age;
	char *gender;
}p1,p2;
int main(){
	p1.age=25;
	p1.gender="MALE";
	p2.age=35;
	p2.gender="FEMALE";
	printf("personal details:%d %s\n",p1.age,p1.gender);
	printf("personal details: %d %s",p2.age,p1.gender);
}