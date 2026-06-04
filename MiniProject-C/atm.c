#include <stdio.h>

float balance = 1000;

void checkBalance()
{
    printf("Current Balance = %.2f\n", balance);
}

void deposit()
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance += amount;

    printf("Amount Deposited Successfully!\n");
    printf("Updated Balance = %.2f\n", balance);
}

void withdraw()
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(balance - amount >= 100)
    {
        balance -= amount;
        printf("Withdrawal Successful!\n");
    }
    else
    {
        printf("Minimum balance of 100 must be maintained!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}