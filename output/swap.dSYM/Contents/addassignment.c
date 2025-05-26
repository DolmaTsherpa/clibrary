#include <stdio.h>
int main()
{
    double num1,num2,add,sub,mul,div;
    int option;
    char repeat;
    do{
    printf("Simple calculator \n");
    printf("Option:\n 1.add \n 2.sub\n 3.Mul\n 4.div");
        printf("'\nChoose your option\n");
        scanf("%d",&option);

        if(option==1)
        {
            printf("Enter num1\n");
            scanf("%lf", &num1);
            printf("Enter num2\n");
            scanf("%lf", &num2);
            add=num1+num2;
            printf("Addition=%lf\n",add);
        }
      else if(option==2)
        {
            printf("Enter num1\n");
            scanf("%lf", &num1);
            printf("Enter num2\n");
            scanf("%lf", &num2);
            sub=num1-num2;
            printf("S=%lf\n",sub);
        }
        else if(option==3)
        {
            printf("Enter num1\n");
            scanf("%lf",&num1);
            printf("Enter num2\n");
            scanf("%lf",&num2);
            mul=num1*num2;
            printf("M=%lf\n",mul);
        }
        else if (option==4)
        {
            printf("enter num1\n");
            scanf("%lf",&num1);
            printf("Enter num2\n");
            scanf("%lf",&num2);
            div=num1/num2;
            printf("D=%lf\n",div);

        }
        else{
            printf("option not available");
        }
        printf("Do you want to continue? Press y to continue");
        scanf(" %c",&option);


      
    }
    while(option=='y');
    return 0;


}