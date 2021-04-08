/*
 ============================================================================
 Name        : 17_pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k=0,i,j,n,count=0;
	printf("enter the number of lines:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		count=0;
		for(i=n-j;i>0;i--)
		{
			printf(" ");
		}
		k=j;
	while(k>=1)
	{
		printf("%d",k);
				k--;
		count++;
	}
k++;
	while(count-1>0)
	{
		printf("%d",++k);
		count--;
	}
	printf("\n");

	}
	return EXIT_SUCCESS;
}
