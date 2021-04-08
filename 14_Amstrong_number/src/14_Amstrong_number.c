/*
 ============================================================================
 Name        : 14_Amstrong_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,r,p,count,sum=0;
	printf("enter the number :");
	scanf("%d",&n);
	int temp = n;
	int temp1 = n;
	while(temp1!=0)
	{
		count++;
		temp1/=10;
	}
	while(temp!=0)
	{
		r=temp%10;
		temp/=10;
		p=1;
		for(i=1;i<=count;i++)
		{
			p=p*r;
		}
		sum = sum + p;
		printf("%d ",sum);
	}
	if(n==sum)
	{
		printf("\n %d is an Armstrong number",n);
	}
	else
	{
		printf("\n %d is not an Armstrong number",n);
	}
	return EXIT_SUCCESS;
}
