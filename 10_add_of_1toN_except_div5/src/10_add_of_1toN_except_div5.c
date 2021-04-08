/*
 ============================================================================
 Name        : 10_add_of_1toN_except_div5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum=0;
	printf("enter the range of number :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%5==0)
		{
			continue;
		}
		else
		{
			printf("\n %d   %d+%d",i,i,sum);
			sum = sum + i;
			printf("\t =%d",sum);
		}
	}
	return EXIT_SUCCESS;
}
