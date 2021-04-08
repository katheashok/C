/*
 ============================================================================
 Name        : 44_fact.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int fact(int);
int main(void) {
	int n,r,ncr;
	printf("enter the number for n and r");
	scanf("%d%d",&n,&r);
	ncr = fact(n)/fact(n-r);
	printf("\n The value of ncr is : %d",ncr);
	return EXIT_SUCCESS;
}
int fact(int x)
{
	int f=1,i;
	if(x==0)
	{
		return(f);
	}
	else
	{
		for(i=1;i<=x;i++)
		{
			f=f*i;
		}
	}
	return f;
}
