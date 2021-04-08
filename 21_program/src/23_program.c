/*
 ============================================================================
 Name        : 23_program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void) {
	int k=0,i=1,j,range,a[10],b[10],p=2,m=0,n=0,r,x,count=0,count1=0;
	scanf("%d",&range);
	while(i<range)
	{
m=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				a[n++]=j;
				count1++;
			}
		}
		for(r=0;r<range;r++)
		{
			k=0;
		for(j=2;j<=i;j++)
		{
			if(p%j==0)
			{
				b[k++]=j;
				count++;
			}
		}
		for(m=0;m<count1;m++)
		{
			for(x=0;x<count;x++)
			{
				if(a[m]==1 && b[x]==1)
				{
					printf("%d,%d are relative primes",i,p);
				}
			}
		}
		p++;
			}
		i++;
		}
	return EXIT_SUCCESS;
}
