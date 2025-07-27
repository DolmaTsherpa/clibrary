#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,m,n;
    printf("Enter number of rows and column\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements for first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements for second matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of two matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}