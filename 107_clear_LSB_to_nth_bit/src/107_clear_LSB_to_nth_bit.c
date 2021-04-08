/*
 ============================================================================
 Name        : 107_clear_LSB_to_nth_bit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,b;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter the nth bit to clear :");
	scanf("%d",&b);
	int lsb = ~((1<<b+1)-1);
	int num = n & lsb;
	printf("\n %d after clearing of bits up to %d",num,b);
	return EXIT_SUCCESS;
}
