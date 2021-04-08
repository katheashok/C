/*
 ============================================================================
 Name        : 40_put_even_odd_arrays.c
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
	int n,i,a[10];
	int even=0,odd=0;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("\n enter the array of elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Even numbers :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf(" %d",a[i]);
		}
	}
	printf("\n Odd numbers ");

	for(i=0;i<n;i++){
		if(a[i]%2!=0)
		{
			printf(" %d",a[i]);
		}
	}

	return EXIT_SUCCESS;
}
