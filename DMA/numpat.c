#include <stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=4;i++)
    {
    
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count = count+1;
        }
        printf("\n");
        
    }
    return 0;
}