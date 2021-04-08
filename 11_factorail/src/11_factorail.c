/*
 ============================================================================
 Name        : 11_factorail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,fact=1;
	printf("\n enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("\n factorial = %d",fact);
	return EXIT_SUCCESS;
}
