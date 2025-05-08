#include <stdio.h>
int main()
{
    int roll, age;
    char gender;
    char name[20];

    printf("Enter roll number\t");
    printf("\n");
    scanf(" %d",&roll);

    printf("Enter age\t");
    printf("\n");
    scanf("%d",&age);

    printf("Enter name\t");
    printf("\n");
    scanf("%s",&name);

    printf("Enter gender\t");
    printf("\n");
    scanf(" %c",&gender);

    printf("\n Details \n");
    printf("Roll number = %d", roll);
    printf("\nName = %s", name);
    printf("\nAge = %d", age);
    printf("\nGender = %c", gender);
    return 0;


}