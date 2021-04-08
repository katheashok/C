/*
 ============================================================================
 Name        : 100_32_bit_power_of_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("enter the number :");
	scanf("%d",&x);

	int power_of_2 = x & x-1;
	if(power_of_2 == 0)
	{
	printf(" \n %d is a power of 2",x);
	}
	else
	{
		printf(" \n %d is not a power of 2",x);

	}

	return EXIT_SUCCESS;
}
