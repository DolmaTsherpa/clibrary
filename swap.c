#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, temp;
    printf("Enter firstNumber:\n");
    scanf("%d", &firstNumber);
    printf("\n");
    printf("Enter secondNumber:\n");
    scanf("%d",&secondNumber);
    //swap value logic
    printf("\n Before swapping \n Value of firstNumber = %d \n Value of secondNumber= %d", firstNumber, secondNumber);

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("\nAfterswapping\n Value of firstnumber = %d\n Value of secondNumber = %d", firstNumber, secondNumber);
    return 0;
    

}