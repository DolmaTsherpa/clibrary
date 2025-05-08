#include <stdio.h>


int main()
{
    int firstNumber, secondNumber, result; // variable initialization
    printf("Enter first Number");
    printf("\n"); // /n helps to break the line
    scanf("%d" , &firstNumber);
    printf("\n");

    printf("Enter second Number");
    printf("\n"); // /n helps to break the line
    scanf("%d" , &secondNumber);
    printf("\n");

    //operation or equation

    result = firstNumber + secondNumber;

    //display
    printf("Addition = %d", result);
    return 0; //successfully close the program

    
}