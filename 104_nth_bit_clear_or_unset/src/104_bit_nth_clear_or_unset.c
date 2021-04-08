/*
 ============================================================================
 Name        : 104_to_check_bit_nth_set_or_unset.c
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
		printf("enter the nth bit to be clear or unset:");
		scanf("%d",&p);
		n=n&(~(1<<p));
		printf("\n %d is bit after clear or unset",n);
	return EXIT_SUCCESS;
}
