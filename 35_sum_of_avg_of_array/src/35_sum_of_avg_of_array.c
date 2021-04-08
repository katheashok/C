/*
 ============================================================================
 Name        : 35_sum_of_avg_of_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,ar[20],sum=0,avg;
	printf("enter the number of array:");
	scanf("%d",&n);
	printf("\n enter the array of elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum+ar[i];
	}
	avg = sum/n;
	printf("\n Sum = %d",sum);
	printf("\n Avg = %d",avg);
	return EXIT_SUCCESS;
}
