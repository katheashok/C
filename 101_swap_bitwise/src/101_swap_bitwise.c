/*
 ============================================================================
 Name        : 101_swap_bitwise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=20,b=10;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("After swap : a = %d , b = %d",a,b);
	return EXIT_SUCCESS;
}
