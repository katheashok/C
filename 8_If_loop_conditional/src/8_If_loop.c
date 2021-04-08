/*
 ============================================================================
 Name        : 8_If_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j;
    printf("enter the values of i,j :");
    scanf("%d%d",&i,&j);
    /*if(i==20 || j==20)
    	printf("\n At least one variable is having 20");
    else
    	printf("\n Both variables are not having 20");
    if(i<=40 && j<=40)
    	printf("\n Both are less than or equal to 40");
    else
    	printf("\n Both are not less than or equal to 40 ");*/
    (i==20) ||( j==20)?  printf("\n At least one variable is having 20") :  printf("\n Both variables are not having 20");
    (i<=40) && (j<=40) ? printf("\n Both are less than or equal to 40") : printf("\n Both are not less than or equal to 40 ");
	return EXIT_SUCCESS;
}
