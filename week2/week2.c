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

    printf("Please enter two numbers pressing the enter key after each one: ");
    scanf("%f", &f0);
    scanf("%f", &f1);

    if(f0 > f1){

        printf("\nThe first number you entered was %g, which is the maximum.\n", f0);
        printf("The second number you entered was %g, which is the minimum.\n", f1);


    }

    else if(f0 < f1){

        printf("\nThe second number you entered was %g, which is the maximum.\n", f1);
        printf("The first number you entered was %g, which is the minimum.\n", f0);

    }

    else{

        printf("\nThe two numbers you entered were %g and %g which are equal", f0, f1);

    }

    

}