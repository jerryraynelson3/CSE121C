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

int findMinimum(int* a, int* b){

    printf("Please enter the first number: ");
    scanf("%d", a);
    printf("\n");

    printf("Please enter the second number: ");
    scanf("%d", b);
    printf("\n");

    if((*a) < (*b)){

        printf("The minimum value is: %d\n\n", *a);

    }

    else{

        printf("The minimum value is: %d\n\n", *b);

    }

    return 0;

}

struct bankAccount{

    unsigned int accountNumber;
    char accountName[20];
    float accountBalance;

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

    printInfo(account);

}

int printInfo(struct bankAccount account){

    printf("\nAccount information: Number %u Name %s Balance $%.2f", account.accountNumber, account.accountName, account.accountBalance);

    return 0;

}

int main(void){

    int a = 0;
    int b = 0;

    printf("Before function call: a is %d and b is %d\n\n", a, b);
    findMinimum(&a, &b);
    printf("After function call: a is %d and b is %d\n\n", a, b);

    unsigned int tempNumber;
    char tempName[20];
    float tempBalance;

    getInfo();

    return EXIT_SUCCESS;

}