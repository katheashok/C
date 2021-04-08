/*
 ============================================================================
 Name        : 13_ASCII.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ch;
	printf("enter the character :");
	scanf("%c",&ch);

	/*for(ch=0;ch<256;ch++)
	{
		printf("\n %c %d",ch,ch);
	}*/

	for(ch=48;ch<=57;ch++){
		printf("\n ASCII value of %c is %d",ch,ch);
		}
	for(ch=65;ch<=90;ch++){
	printf("\n ASCII value of %c is %d",ch,ch);
	}
	for(ch=97;ch<=122;ch++){
		printf("\n ASCII value of %c is %d",ch,ch);
		}
	return EXIT_SUCCESS;
}
