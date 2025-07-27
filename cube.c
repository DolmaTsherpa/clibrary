#include <stdio.h>
int l, result;
void volume(int);
int main()
{
    printf("Enter length");
    scanf("%d",&l);
    volume(l);
    return 0;
}
void volume(int c)
{
    result=c*c*c;
    printf("Volume of cube = %d", result);
}