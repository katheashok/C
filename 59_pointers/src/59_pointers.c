/*
 ============================================================================
 Name        : 59_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};
	printf("\n the meaning of a table         : %d ",table);
	printf("\n the meaning of (table+1)       : %d",(table+1));
	printf("\n the meaning of *(table+1)      : %d",*(table+1));
	printf("\n the meaning of (*(table+1)+1)  : %d",(*(table+1)+1));
	printf("\n the meaning of *(table)+1 :    : %d",*(table)+1);
	printf("\n the value of *(*(table+1) +1)  : %.1f",*(*(table+1) +1));
	printf("\n the value of *(*(table)+1)     : %.1f",*(*(table)+1));
	printf("\n the value of *(*(table+1)      : %.1f",*(*(table+1)));
	printf("\n the value of *(*(table) + 1)+1 : %.1f",*(*(table) + 1)+1);
	return EXIT_SUCCESS;
}
