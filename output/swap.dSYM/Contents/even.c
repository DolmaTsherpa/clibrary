#include <stdio.h>
int main()
{
    int i,count=0;
  
    for(i=2;i<=100;i++)
    {
       if(i%2==0)
       {
        
        count=count+1;

       }
       
    }
      printf("Total number of even number upto 100 = %d",count);
    return 0;

}