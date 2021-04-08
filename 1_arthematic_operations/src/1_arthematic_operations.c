/*
 ============================================================================
 Name        : 1_arthematic_operations.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,add,sub,mul;
	float div,mod;
	printf("enter the values of a and b :");
	scanf("%d%d",&a,&b);
	printf("\n add = %d",a+b);
	printf("\n sub = %d",a-b);
	printf("\n mul = %d",a*b);
	printf("\n div = %d",a/b);
	printf("\n mod = %d",a%b);
	return EXIT_SUCCESS;
}
