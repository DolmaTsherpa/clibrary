#include <stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if((num%3==0)&&(num%7==0))
    {
     printf("%d is divisible by both 3 and 7");
    }
    else if((num%3==0)&&(num/7!=0))
    {
        printf("");
    }
}