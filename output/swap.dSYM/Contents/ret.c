#include <stdio.h>
double area(int, float);
int main()
{
    int r;
    float pi=3.14; double farea;
    printf("Enter radius");
    scanf("%d",&r);
    farea=area(r,pi);
    printf("Area of circle=%lf",farea);
    return 0;
}
double area(int x, float y)
{
    double result;
    result=y*x*x;
    return result;
}