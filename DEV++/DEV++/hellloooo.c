           
           
#include<stdio.h>
struct record
{
	char*name;
	int acct_no;
	char acct_type;
	float bal;
};
struct record fun(struct record);
void main()
{
	struct record c;
	printf("\nenter details:");
	scanf("%s %d %c %f ",c.name,&c.acct_no,&c.acct_type,&c.bal);
	c=fun(c);
	printf("\n%s %d %c %f",c.name,c.acct_no,c.acct_type,c.bal);
}
struct record fun(struct record r)
{
	r.name="cse";
	r.acct_no=1789;
	r.acct_type='R';
	r.bal=10000.00;
	return(r);
}