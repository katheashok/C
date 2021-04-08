/*
 ============================================================================
 Name        : 15_palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,rem,rev=0,temp;
	printf("enter a number :");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem = temp%10;
		rev = rev*10+rem ;
		temp/=10;
	}
	printf("\n %d ",rev);
	if(n==rev)
	{
		printf("\n %d is an palindrome",n);
	}
	else
	{
		printf("\n %d is not an palindrome",n);
	}

	return EXIT_SUCCESS;
}
