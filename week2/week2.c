/*
 ============================================================================
 Name        : week2.c
 Author      : Jerry Ray Nelson III
 Version     : 1.0.0
 Copyright   : Jerry Ray Nelson III 11/2022, all rights reserved.
                        Any reproduction or use without express written consent is prohibited
						and will be prosecuted to the fullest extent of the law.
 Description : Asks a user to enter two numbers and then tells the user which
                        is the minimum and which is the maximum.
                        Asks the user to pick an item from a list of options to buy and then
                        displays the price for that item.
                        Asks the user to enter the age of a child and the number of the day
                        and then returns an appropriate bedtime for that child.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float f0 = 0;
    float f1 = 0;
    int opt = 0;
    float price = 0;
    int day = 0;
    int age = 0;

    printf("Please enter two numbers pressing the enter key after each one:\n");
    scanf("%f", &f0);
    scanf("%f", &f1);

    if(f0 > f1){

        printf("\nThe first number you entered was %g, which is the maximum.\n", f0);
        printf("The second number you entered was %g, which is the minimum.\n\n", f1);


    }

    else if(f0 < f1){

        printf("\nThe second number you entered was %g, which is the maximum.\n", f1);
        printf("The first number you entered was %g, which is the minimum.\n\n", f0);

    }

    else{

        printf("\nThe two numbers you entered were %g and %g which are equal\n\n", f0, f1);

    }

    printf("Please select an item that you would like to purchase from the list by typing it's number and hitting enter.\n");
    printf("1. Apple\n");
    printf("2. Bread\n");
    printf("3. Cheese\n");
    printf("4. Pasta\n");
    printf("5. Chicken\n");

    scanf("%d", &opt);

    printf("\n");

    switch(opt){

        case 1:
            price = 0.79;
            break;
        case 2:
            price = 2.99;
            break;
        case 3:
            price = 4.57;
            break;
        case 4:
            price = 1.99;
            break;
        case 5:
            price = 4.82;
            break;

    }

    printf("The item you chose costs $%g.\n\n", price);

    printf("Time to determine the bedtime of a child.\n");
    printf("Please enter the age of a child (must be a number 0-18):\n");

    scanf("%d", &age);

    printf("\n");

    printf("Please enter the number of the day of the week.\n");
    printf("1 = Sunday and 7 = Saturday (must be a number 1-7).\n");

    scanf("%d", &day);

    printf("\n");

    if(age < 0 || age > 17){

        printf("Number for age is not a number 0-17");

    }

    else if(day < 1 || day > 7){

        printf("Number for day is not a number 1-7.");

    }

    else if(age >= 0 && age <= 5){

        printf("The child should go to sleep at 7pm");

    }

    else if(age >= 6 && age <= 10){

        if(day >= 1 && day <= 5){

            printf("The child should go to sleep at 8pm");

        }

        else{

            printf("The child should go to sleep at 9pm");

        }

    }

    else{

        if(day >= 1 && day <= 5){

            printf("The child should go to sleep at 9pm");

        }

        else if(day == 6){

            printf("The child should go to sleep at 12am");

        }

        else{

            printf("The child should go to sleep at 11pm");

        }

    }

}