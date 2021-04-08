/*
 ============================================================================
 Name        : 12_sum_of_odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i=1,sum=0;
	printf("enter the last number of range :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("\n %d   %d+%d",i,i,sum);
			sum = sum + i;
			printf(" =%d",sum);
		}i++;
	}
	return EXIT_SUCCESS;
}
