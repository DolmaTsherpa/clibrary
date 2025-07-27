#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],sub[10][10],i,j,m,n;
    printf("Enter number of rows and column\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements for the first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements for second matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Subtraction of two matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
        
    
}