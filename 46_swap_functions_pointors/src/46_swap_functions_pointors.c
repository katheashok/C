/*
 ============================================================================
 Name        : 46_swap_functions_pointors.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap_number(int*, int*);
int main(void) {
	int a,b;
	printf("enter the a and b values :");
	scanf("%d%d",&a,&b);
	swap_number(&a,&b);
	printf("After swap : %d %d",a,b);
	return EXIT_SUCCESS;
}
void swap_number(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
