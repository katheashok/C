/*
 ============================================================================
 Name        : 4_complex_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct complex
{
	int r,i;
};
int main(void) {
	struct complex a,b,c;
	printf("enter a value of real+image :");
	scanf("%d%d",&a.r,&a.i);
	printf("enter b value of real + image");
	scanf("%d%d",&b.r,&b.i);

	c.r = a.r + b.r;
	c.i = a.i + b.i;

	printf("\n sum of complex number : %d + %di ",c.r,c.i);
	return EXIT_SUCCESS;
}
