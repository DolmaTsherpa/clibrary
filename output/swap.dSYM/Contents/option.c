#include <stdio.h>
int main()
{
    double num1,num2,add,sub,mul,div;
    int option;
    char repeat;
    do{
        printf("Simple Calculations\n");
        printf("option:\n 1.add\n 2.sub\n 3.mul\n 4.div");
        printf("\nChoose your option:\n");
        scanf("%d",&option);

        if(option==1)
        {
            printf("enter num1\n");
            scanf("%lf", &num1);
            printf("enter num2\n");
            scanf("%lf",&num2);
            add=num1+num2;
            printf("Addition=%lf\n",add);

        }
        else if(option==2)
        {
            printf("enter num1\n");
            scanf("%lf",&num1);
            printf("enter num2\n");
            scanf("%lf",&num2);
            sub=num1-num2;
            printf("subtraction=%lf\n",sub);


        }
        else if(option==3)
        {
            printf("enter num1\n");
            scanf("%lf",&num1);
            printf("enter num2\n");
            scanf("%lf",&num2);
            mul=num1*num2;
            printf("Multiplication=%lf\n",mul);
        }
        else if(option==4)
        {
            printf("enter num1\n");
            scanf("%lf",&num1);
            printf("enter num2\n");
            scanf("%lf",&num2);
            div=num1/num2;
            printf("Division=%lf\n",div);
        }
        else{
            printf("No other option available");

        }
        printf("Do you want to continue? press y to continue\n");
        scanf(" %c,&option");

    }
    while(option=='y');
    return 0;
}