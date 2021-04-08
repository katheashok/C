/*
 ============================================================================
 Name        : 109_uppercase_to_lowercase.c
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
	scanf("%c",&ch);
	int lch = ch |' ';
	printf("%c == %c",ch,lch);
	return EXIT_SUCCESS;
}
