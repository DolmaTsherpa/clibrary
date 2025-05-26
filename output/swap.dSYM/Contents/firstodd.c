#include <stdio.h>
int main()
{
    int i;
    printf("First 50 odd numbers:\n");
    for(i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            printf("%d\t",i);
        }
        
    }
    return 0;

}