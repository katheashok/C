/*
 ============================================================================
 Name        : 111_bitwise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,mul,x,p;
	printf("enter the number to mul :");
	scanf("%d",&n);
	x=n;
	p=n;
	if(n<63)
	{
	mul = (n&7)-(p>>3);
	if(mul==0)
	printf("\n%d is divisible by 9",x);
	}
	else
	{
		mul = (n&15)-(p>>3);
		if(mul==0)
		printf("\n%d is divisible by 9",x);
		else
		printf("\n%d is not divisible by 9",x);
	}
	return EXIT_SUCCESS;
}
