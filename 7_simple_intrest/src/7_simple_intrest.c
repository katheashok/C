/*
 ============================================================================
 Name        : 7_simple_intrest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P,T;
	float R,I;
	printf("enter principle :");
	scanf("%d",&P);
	printf("enter Time :");
	scanf("%d",&T);
	printf("enter Rate :");
	scanf("%f",&R);
	I = (P*T*R)/100;
	printf(" simple intrest %.2f",I);
	return EXIT_SUCCESS;
}
