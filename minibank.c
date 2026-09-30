#include <stdio.h>

void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){
    float amount = 0.0f;

    printf("\nEnter how much to deposit: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);

        return amount;
    }

}
float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter how much to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("\nInvalid amount\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient balance, Balance is %.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("MONEY MONEY MONEY");

    do{
        printf("\nSelect an option: \n");
        printf("\n1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using this");
                break;
            default:
                printf("\nError, invalid choice\n");
        }


    } while(choice != 4);

    return 0;
}