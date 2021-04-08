/*
 ============================================================================
 Name        : 9_if_else_and_switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("enter a character : ");
	scanf("%c",&c);
	if(c == 'A' || c == 'a')
		printf("\n A for Apple");
	else if (c == 'B' || c == 'b')
		printf("\n B for Bat");
	else if (c == 'D' || c == 'd')
		printf("\n D for Dog");
	else if (c == 'F' || c == 'f')
		printf("\n F for Fan");
	else
		printf("\n Character is not in the range");
	switch(c)
	{
	case 'a':
	case 'A':
		printf("\n A for Apple");
		break;
	case 'b':
	case 'B':
		printf("\n B for Bat");
		break;
	case 'd':
	case 'D':
		printf("\n D for Dog");
		break;
	case 'f':
	case 'F':
		printf("\n F for Fan");
		break;
	default :
		printf("\n Character is not in the range");

	}
	return EXIT_SUCCESS;
}
