/*
 ============================================================================
 Name        : 33_array_initialization.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	printf("enter the number of elements to be stored in array:\n");
	scanf("%d",&n);
	int array[n];
	printf("enter the elements of array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("entered array is:\n");
	for (i=0;i<n;i++)
		printf("%d ",array[i]);

	return EXIT_SUCCESS;
}
