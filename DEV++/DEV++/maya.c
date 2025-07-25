#include<stdio.h>
#include<math.h>
int main()
{ 
   float p=10000;
  float  r=0.001;
  float  n=180;
  float t=p*(pow(1+r,n)-1)/r*(1+r);
  printf("%f",t);
  return 0;
}
	
