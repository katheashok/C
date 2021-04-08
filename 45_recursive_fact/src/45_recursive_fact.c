/*
 ============================================================================
 Name        : 45_recursive_fact.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("enter the intiger value :");
	scanf("%d",&n);
	printf("\n Factorail : %d",fact(n));
	return EXIT_SUCCESS;
}
int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);
	else
		return 1;
}
