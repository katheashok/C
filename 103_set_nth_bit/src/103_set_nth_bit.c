/*
 ============================================================================
 Name        : 103_set_nth_bit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,p;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter the nth bit to be set:");
	scanf("%d",&p);
	n=n|(1<<p);
	printf(" bit after set : %d",n);
	return EXIT_SUCCESS;
}
