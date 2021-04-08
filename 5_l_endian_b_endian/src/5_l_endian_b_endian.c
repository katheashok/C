/*
 ============================================================================
 Name        : 5_l_endian_b_endian.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i =1;
	char *c = (char*)&i;
	if(*c)
		printf("little endian");
	else
		printf("big endian");
	return EXIT_SUCCESS;
}
