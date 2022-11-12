/*
 ============================================================================
 Name        : week2.c
 Author      : Jerry Ray Nelson III
 Version     : 1.0.0
 Copyright   : Jerry Ray Nelson III 11/2022, all rights reserved.
                            Any reproduction or use without express written consent is prohibited
							and will be prosecuted to the fullest extent of the law.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float f0 = 0;
    float f1 = 0;
    int opt = 0;
    float price = 0;

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
            printf("The item you chose was an apple which costs $%g/each.", price);
            break;
        case 2:
            price = 2.99;
            printf("The item you chose was bread which costs $%g/loaf.", price);
            break;
        case 3:
            price = 4.57;
            printf("The item you chose was cheese which costs $%g/lb.", price);
            break;
        case 4:
            price = 1.99;
            printf("The item you chose was pasta which costs $%g/lb.", price);
            break;
        case 5:
            price = 4.82;
            printf("The item you chose was chicken which costs $%g/lb.", price);
            break;

    }

}