/*
 ============================================================================
 Name        : 31_arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	int n,i,j,a[50],b[50],temp;
	printf("enter the number of elements in array :");
	scanf("%d",&n);
	printf("\n enter array of elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];

	}
	printf("\n Reverse order of an array : ");
	for(i=0;i<n;i++)
		{
			printf("%d",b[i]);
		}
}
