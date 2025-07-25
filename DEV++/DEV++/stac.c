#include<stdio.h>
int main()
{
int top;
void push(element){
if(top>5)
 {
printf("full!!!");
}
 else{
top++;
stack[top] = element;
}
}
    



code for pop
int pop(){
if(stack is empty)
{
printf("empty");
}
else
{
top--
stack[top]e = element;
}
}




code for display
void display()
{
if(stack is empty)
{
printf("empty!!!");
}
else{
for(i=top;i>-1;i++)
printf("%d\n",stack[i]);
}
}
}

