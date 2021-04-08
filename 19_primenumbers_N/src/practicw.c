	/*
 ============================================================================
 Name        : practicw.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j;
		scanf("%d",&n);
		for(i=2;i<=n;i++)
		{
			int c=0;
			for(j=1;j<=i;j++)
			{
			if(i%j==0)
			 {
					c++;
				}
			}
			if(c==2)
			{
				printf("%d ",i);
			}
		}
	return EXIT_SUCCESS;
}
