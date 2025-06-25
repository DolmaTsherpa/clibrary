#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int accountnumber=101010;
    int balance = 10000;
    int option;
    int depositmoney, withdrawmoney;
    char again;
    int mycode=2355;
    int pincode;
    int count=0;
    printf("********************");
    printf("\nWelcome To ATM Service\n");
    firstgo:
    if(count<=3)
    {
        
    }
    printf("\nEnter your pincode");
    scanf("%d",&pincode);
    if(pincode==mycode)
    {
    do{
    printf("1.Deposit money\n 2. Withdraw money \n 3. Account information");
    printf("\nEnter your option\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("\nHow much do you want to deposit\n");
        scanf("%d",&depositmoney);
        balance=depositmoney+balance;
        printf("\n Your total balance = %d",balance);
        break;//jump statement

    case 2:
        printf("\nHow much do you want to withdraw\n");
        scanf("%d",&withdrawmoney);
        if(withdrawmoney < balance)
        { balance=balance-withdrawmoney;
        printf("\n your total balance=%d",balance);
    }
        balance=depositmoney+withdrawmoney;
        printf("\n Your total balance = %d",balance);
        break;//jump statement

    case 3:
        printf("Your account number=%d", accountnumber);
        printf("\n Your total balance = %d",balance);
        break;

    case 4:
        exit(0);

    }
    printf("\n Do you want to continue? \n Press y to continue\n");
    scanf(" %c",&again);
    }
    while(again=='y');
}
    else{
        printf("\n Incorrect pincode\n");
        count++;
        goto firstgo;
    }

    return 0;


}