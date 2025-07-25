#include<stdio.h>
#include<string.h>
//employee id ,name ,salary,experience display name of employee 
struct employee
{
	int id;
	char name[10];
	float salary;
	int exp
};
int main()
{
	int i,exp,salary;
	struct employee st[5];
	printf("enter records of 5 employees");
	for(i=0;i<5;i++)
	{
		printf("\nenter id:");
		scanf("%d",&st[i].id);
		printf("\nenter name:");
		scanf("%s",&st[i].name);
		printf("\nenter salary:");
		scanf("%f",&st[i].salary);
		printf("\nenter experience:");
		scanf("%d",&st[i].exp);				
	}
	printf("\nemployee information list:");
	for (i=0;i<5;i++)
	{
		if(exp>=10 && salary<=50000)
		{
		printf("\nI'D : %d,  Name :%s ",st[i].id,st[i].name);
	    }
	}
	return 0;
}