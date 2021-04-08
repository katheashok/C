/*
 ============================================================================
 Name        : 108_clear_all_bits_upto_nth_bit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, b;
	printf("enter the number :");
	scanf("%d", &n);
	printf("enter the nth bit to clear :");
	scanf("%d", &b);
	int msb = (1 << b) - 1;
	int num = n & msb;
	printf("\n %d after clearing of bits up to %d", num, b);
	return EXIT_SUCCESS;
}
