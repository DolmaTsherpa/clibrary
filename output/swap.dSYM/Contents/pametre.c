#include <stdio.h>
void area(int, float);
void main()
{
    int r;
    float pi=3.14;
    printf("Enter radius");
    scanf("%d",&r);
    area(r,pi);

}
void area(int a , float b)
{
    double result;
    result= b*a*a;
    printf("Area=%lf",result);

}
