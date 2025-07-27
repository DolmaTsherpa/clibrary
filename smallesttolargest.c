#include <stdio.h>
int main()
{
    int arr[10]={10,3,0,14,1,2,8,9,7,5};
    int i;
    int smallest= arr[0], largest=arr[0];
    printf("Enter array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("smallest=%d",smallest);
    printf("largest=%d",largest);
    return 0;
}