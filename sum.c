#include <stdio.h>
int l,b,result;
void perimeter(int,int);
int main()
{
    printf("Enter length");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    perimeter(l,b);
    return 0;
}
void perimeter(int x, int y)
{
    result=2*(x + y);
    printf("perimeter of rectangle = %d", result);
}