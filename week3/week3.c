/*
 ============================================================================
 Name        : week3.c
 Author      : Jerry Ray Nelson III
 Version     : 1.0.0
 Copyright   : Jerry Ray Nelson III 11/2022, all rights reserved.
                        Any reproduction or use without express written consent is prohibited
						and will be prosecuted to the fullest extent of the law.
 Description : Asks the user to enter a string and then displays the integer value of every character
                        in the string.
                        Asks the user to enter an integer and then displays the binary of that integer as it is
                        found in memory.
                        Takes the two predetermined operands and then applies bitwise math to them and
                        displays the result of the bitwise operations.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayBinary(unsigned int num) {
    
    for (int i = 31; i >= 0; i--) {
        
        int mask = (1 << i);

        if (num & mask)
           printf("1");

        else 
           printf("0");
    }

    printf("\n\n");

}


int main(void){

    char userInput[20];
    printf("Please enter a word and then press the enter key: ");
    scanf("%s", userInput);
    printf("\n");

    for(int i = 0; i < strlen(userInput); i++){

        printf("%d\n", (int)(userInput[i]));

    }

    printf("\n");

    unsigned int num;

    printf("Please enter an unsigned integer and then press enter: ");
    scanf("%u", &num);

    displayBinary(num);

    unsigned int a = 15;
    unsigned int b = 30;

    printf("The first operand is: %u\n", a);
    displayBinary(a);

    printf("The second operand is: %u\n", b);
    displayBinary(b);

    unsigned int c = a & b;
    printf("The result of %u & %u is: %u\n", a, b, c);
    displayBinary(c);

    unsigned int d = a | b;
    printf("The result of %u | %u is: %u\n", a, b, d);
    displayBinary(d);

    unsigned int e = ~a;
    printf("The result of ~%u is: %u\n", a, e);
    displayBinary(e);

    unsigned int f = ~b;
    printf("The result of ~%u is: %u\n", b, f);
    displayBinary(f);

    unsigned int g = a ^ b;
    printf("The result of %u ^ %u is: %u\n", a, b, g);
    displayBinary(g);

    return EXIT_SUCCESS;
}