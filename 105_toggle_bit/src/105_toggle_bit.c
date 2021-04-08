/*
 ============================================================================
 Name        : 105_toggle_bit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,p;
	printf("enter the number :");
	scanf("%d", &n);
	printf("enter the nth bit of position to be toggled :");
	scanf("%d", &p);
	n = n ^ (1<<p);
	printf(" %d after toggle",n);
	return EXIT_SUCCESS;
}
