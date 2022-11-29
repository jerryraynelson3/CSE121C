/*
 ============================================================================
 Name        : week4.c
 Author      : Jerry Ray Nelson III
 Version     : 1.0.0
 Copyright   : Jerry Ray Nelson III 11/2022, all rights reserved.
                Any reproduction or use without express written consent is prohibited
                and will be prosecuted to the fullest extent of the law.
 Description : Takes two numbers to determine the minimum value between the two.
                Displays the minimum value of the two numbers input by the user.
                Uses pointers to allow the function to see the variables that the numbers
                are stored in and modify them even though they are not local to the function.
                Takes the account number, account name, and account balance of a bank account,
                and then stores the data in a structure.
                Then passes the structure to another function that displays the data for the user to
                see.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bankAccount{

    unsigned int accountNumber;
    char accountName[20];
    float accountBalance;
    struct bankAccount *next;

};

int getInfo(void){

    struct bankAccount account;
    unsigned int number;
    char name[20];
    float balance;

    printf("Please enter the account number: ");
    scanf("%u", &number);
    printf("\nPlease enter the account name: ");
    scanf("%s", name);
    printf("\nPlease enter the account balance: $");
    scanf("%f", &balance);

    account.accountNumber = number;
    strcpy(account.accountName, name);
    account.accountBalance = balance;

    return 0;

}

int printInfo(struct bankAccount account){

    printf("\nAccount information: Number %u Name %s Balance $%.2f", account.accountNumber, account.accountName, account.accountBalance);

    return 0;

}

int main(void){

    unsigned int tempNumber;
    char tempName[20];
    float tempBalance;
    int choice = 4;
    int numRecords = 0;

    while(choice != 0){

        printf("Main Menu:\n");
        printf("    1. Add account\n");
        printf("    2. Display all accounts\n");
        printf("    0. Exit program\n\n");

        printf("Your choice (Please enter only the number of the option): ");
        scanf("%d", &choice);
        printf("\n");

        if(choice == 1){

            // getInfo();
            numRecords++;
            printf(numRecords);

        }

        // if(choice == 2){

        //     printInfo();

        // }



    }

    return EXIT_SUCCESS;

}