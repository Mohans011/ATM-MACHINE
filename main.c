#include<stdio.h>

int main()
{
    int balance=0;
    int pin = 123;
    int enteredpin;
    int option;
    int Another_action=1;

    printf("Enter your pin:\n");
    scanf("%d",&enteredpin);

    if(enteredpin!=pin){
        printf("Invalid pin\n");
        return 0;
    }

    while(Another_action==1){
    printf("What do you want to do?\n");
    printf("1 - Check Your Balance\n");
    printf("2 - Deposit\n");
    printf("3 - Withdraw\n");
    scanf("%d",&option);


    if(option==1){
        printf("Your Balance is %d\n",balance);
    }
    else if(option==2){
        int depositamount;
        printf("How much money you want to deposit:\n");
        scanf("%d",&depositamount);
        if(depositamount>0){
          balance+=depositamount;
        }
        else{
            printf("Invalid Amount\n");
        }
    }
    else if(option==3){
        int withdrawamount;
        printf("How much money you want to Withdraw:\n");
        scanf("%d",&withdrawamount);
        if(withdrawamount <= balance){
          balance-=withdrawamount;
        }
        else{
            printf("You don't have enough money\n");
        }
    }
    else{
        printf("Invalid Transaction\n");

    }

    int Another_action=0;
    while(Another_action!=1 && Another_action!=2){
    printf("Do you want to do another Action\n");
    printf("1 - YES   2 - NO\n");
    scanf("%d",&Another_action);
    if(Another_action==2){
        printf("THANKS FOR USING ATM!!");
        return 0;
    }
        else if(Another_action>2){
            printf("Invalid Number\n");
        }
    }
    }

}
