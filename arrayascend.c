#include <stdio.h>
int main()
{
    int arr[5]={1,4,3,2,8};
    int i, j, temp;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Ascending order \n");
    for(i=0;i<5;i++)
    {
        printf("%d", arr[i]);

    }
    printf("Descending order\n");
    for(i=5;i>0;i--){
        printf("%d", arr[i]);
    }
    return 0;
}