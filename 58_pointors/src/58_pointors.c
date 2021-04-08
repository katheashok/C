/*
 ============================================================================
 Name        : 58_pointors.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x[8]= {10,20,30,40,50,60,70,80};
	printf(" X is %d ",x);
	printf("\n (X+2) is %d ",(x+ 2));
	printf("\n *X is %d",*x);
	printf("\n (*x+2) is %d",(*x+2));
	printf("\n *(x+2) is %d",*(x+2));
	return EXIT_SUCCESS;
}
