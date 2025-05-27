#include <stdio.h>
int main()
{ 
    int i, num, count=0;
    char  option;
    do{
        count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }


    }
    if(count==2)
    {
        printf("prime number");
    }
    else if(num==1)
    {
        printf("Neither prime nor composite");
    }
    
    else{
        printf("Composite number");
    }
    
   
    printf("Do you want to continue? Press y to continue");
    scanf(" %c", &option);
    }while(option=='y');


return 0;
}