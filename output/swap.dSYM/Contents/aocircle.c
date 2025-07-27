#include <stdio.h>
void area();
int r;
float pi=3.14;
void main()
{
    printf("Enter radius");
    scanf("%d",&r);
    area();

}
void area()
{
    double result;
    result=pi*r*r;
    printf("area=%lf",result);
}
