/*
 ============================================================================
 Name        : helloWorld.c
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

struct employeeInfo{

	char name[15];
	int idNumber;
	float daysEmployed;

};

int main(void) {
	
	char c = 'a';
	int i = 1;
	short s = 100;
	long l = 1000000000;
	float f = 0;
	struct employeeInfo e;
	e.name[0] = 'J';
	e.name[1] = 'e';
	e.name[2] = 'f';
	e.name[3] = 'f';
	e.name[4] = 0;
	e.idNumber = 5546;
	e.daysEmployed = 5.23;

	printf("Your character is %c, the numerical value is %d, and the size is %d byte(s).\n\n", c, c, sizeof(c));
	printf("Your integer is %d, the size of which is %d byte(s).\n\n", i, sizeof(i));
	printf("Your short integer is %d, the size of which is %d byte(s).\n\n", s, sizeof(s));
	printf("Your long integer is %ld, the size of which is %d byte(s)\n\n", l, sizeof(l));
	
	printf("Please enter a float ");
	scanf("%f", &f);
	printf("\nYour float is %e or %f or %g.\n\n", f, f, f);

	char x[15];

	printf("Please enter a string ");
	scanf("%s", x);
	printf("\nThe string is %s\n\n", x);

	printf("The employee's name is %s, which is %d byte(s).\n\n", e.name, sizeof(e.name));
	printf("The employee's ID number is %d, which is %d byte(s).\n\n", e.idNumber, sizeof(e.idNumber));
	printf("The number of days the employee has been employed is %g days, which is %d byte(s)", e.daysEmployed, sizeof(e.daysEmployed));

	return EXIT_SUCCESS;

}