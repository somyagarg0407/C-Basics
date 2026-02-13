#include <stdio.h>

/* Structure representing a bank account */
struct BankAccount {
    int accountNumber;        // to uniquely identify the account
    char name[50];            // to store customer name
    char accountType[20];     // savings / current
    float balance;            // to store account balance
};

int main() {
    struct BankAccount acc;

    acc.accountNumber = 12345;
    acc.balance = 25860.50;

    printf("Account Number: %d\n", acc.accountNumber);
    printf("Balance: %.2f\n", acc.balance);

    return 0;
}
