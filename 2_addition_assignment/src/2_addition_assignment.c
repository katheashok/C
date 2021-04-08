/*
 ============================================================================
 Name        : 2_addition_assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf("enter a,b values :");
	scanf("%d%d",&a,&b);
	a+=b;
	printf("\t %d ",a);
	return EXIT_SUCCESS;
}
