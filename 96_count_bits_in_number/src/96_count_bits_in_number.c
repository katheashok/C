/*
 ============================================================================
 Name        : 96_count_bits_in_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,count=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(n)
	{
		count++;
		n >>=1;
	}
	printf("\n Number of bits in a given number is %d",count);
	return EXIT_SUCCESS;
}
