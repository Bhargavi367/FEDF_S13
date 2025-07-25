#include<stdio.h>
int main()
{
    float side1,side2,side3,area,perimeter,base,height;
    printf("enter side1");
    scanf("%f",&side1);
    printf("enter side2");
    scanf("%f",&side2);
    printf("enter side3");
    scanf("%f",&side3);
    printf("enter base");
    scanf("%f",&base);
    printf("enter height");
    scanf("%f",&height);
    area=0.5*base*height;
    perimeter=side1+side2+side3;
    printf("%f",area);
    printf("%f",height);
    return 0;
    
}