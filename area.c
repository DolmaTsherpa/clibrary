#include <stdio.h>
int b, h, result;
void area(int, int);
int main()
{
    int b, h;
    printf("Enter breadth and height");
    scanf("%d%d",&b,&h);
    area(b,h);
    return 0;


}
void area(int a,int c)
{
    result = 1/2 * (a * c);
    printf("Area of triangle=%d", result);
}