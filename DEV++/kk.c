#include<stdio.h>
#include<stdbol.h>
# define MAX_SIZE 5
type defstruct{
int items[MAX_SIZE];
int front;
int rear;30
}
circular Queue;
void intializeQueue(circularQueue*q){
	q->front=-1;
	q->rear=-1;
}
boot isFULL(ciruclar Queue*q){
	return(q->front==0&&q->rear==MAX_SIZE-1)||q->rear==(q->front-1)%(MAX_SIZE-1));
}
boot isEMPTY(ciruclarQueue*q){
	return q->front=-1
}
void
}