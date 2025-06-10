
#include <stdio.h>

int main() {
    int choice;
    int balance = 1000;
    int amount;

    printf("*** Welcome to Mini ATM ***\n");
    printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your balance is: %d \n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Deposited! New Balance: %d\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount > balance) {
                printf("Not Enough balance!\n");
            } else {
                balance = balance - amount;
                printf("Withdrawn! New Balance: %d\n", balance);
            }
            break;
        case 4:
            printf("** Thank you for using Mini ATM! **\n");
            break;
        default:
            printf("?? Invalid choice.\n");
    }

    return 0;
}

