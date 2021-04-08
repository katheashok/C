/*
 ============================================================================
 Name        : 3_max_of_two_numbers_conditional.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,max;
	printf("enter the values of a and b:");
	scanf("%d%d",&a,&b);
	max = a>b?a:b;
	printf("\n greatest value is %d",max);
	return EXIT_SUCCESS;
}
