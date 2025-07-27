#include <stdio.h>
int main()
{
    int marks[5], i;
    double total, percentage;
    int sum = 0;
    printf("Enter marks for C,Math,Account, English, Micro\n");
    for (i=0;i<5;i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = marks[i] + sum;
    }
    total = (double) sum;
    percentage = (double) total/5;
    printf("Total marks=%lf,total");
    printf("percentage = %lf, percentage");
    if( percentage>=90)
    {
        printf("Division = Board Topper");

    }
    else if (percentage >= 80 &&percentage < 90)
    {
        printf("Division = Distinction");
    }
    else{
        printf("NQ");
    }
    if (marks[i]<40)
    {
        printf("Result = Failed");
    }
    else{
        printf("REsult = Pass");
    }
    






    return 0;
}