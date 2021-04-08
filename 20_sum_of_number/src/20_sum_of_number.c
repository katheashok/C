/*
 ============================================================================
 Name        : 20_sum_of_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,rem,sum=0;
		scanf("%d",&n);
		int temp = n;
		do
		{
			rem = n%10;
			sum = sum + rem;
			n/=10;
			temp--;
		}while(temp>0);

		printf("\n %d",sum);

	return EXIT_SUCCESS;
}
