/*
 ============================================================================
 Name        : 102_msb.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,max=1,b,p=-1,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		p++;
		b=n&1;
		if(b==1)
		{
			while(p>0)
			{
				max=max*2;
				p--;
			}
		}
		n=n>>1;
	}
	printf("%d\n",max);
	printf("%d\n",--count);
	return EXIT_SUCCESS;
}

