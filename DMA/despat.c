#include <stdio.h>
int main()
{
    int i , j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}