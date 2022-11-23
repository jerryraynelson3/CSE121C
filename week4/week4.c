/*
 ============================================================================
 Name        : week4.c
 Author      : Jerry Ray Nelson III
 Version     : 1.0.0
 Copyright   : Jerry Ray Nelson III 11/2022, all rights reserved.
                        Any reproduction or use without express written consent is prohibited
						and will be prosecuted to the fullest extent of the law.
 Description :
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

int main(void){

    int a = 0;
    int b = 0;

    printf("Before function call: a is %d and b is %d\n\n", a, b);
    findMinimum(&a, &b);
    printf("After function call: a is %d and b is %d\n\n", a, b);

    return EXIT_SUCCESS;

}