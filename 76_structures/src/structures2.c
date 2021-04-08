/*
 ============================================================================
 Name        : structures2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct class
{
	int a;
	char c;
};
union class1
{
	char b;
	char ch;
};
int main(void) {
	struct class s;
	union class1 u;
	printf("Size of structure is %u",sizeof(s));
	printf("Size of union is %u",sizeof(u));
	return EXIT_SUCCESS;
}
