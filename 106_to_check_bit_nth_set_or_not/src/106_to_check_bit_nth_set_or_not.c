/*
 ============================================================================
 Name        : 106_to_check_bit_nth_set_or_not.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, p;
	printf("enter the number :");
	scanf("%d", &n);
	printf("enter the nth bit to check if it is set or not");
	scanf("%d", &p);
	n = n & (1 << p);
	if(n==0)
	{
		printf("\n  bit is not set",n);
	}
	else
	{
		printf("\n  bit is set",n);
	}
	return EXIT_SUCCESS;
}
