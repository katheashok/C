/*
 ============================================================================
 Name        : 110_lower_to_uppercase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("enter the upper case alphabet:");
	scanf("%c", &ch);
	int lch = ch & '_';
	printf("%c == %c", ch, lch);
	return EXIT_SUCCESS;
}
