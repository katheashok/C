/*
 ============================================================================
 Name        : 115_multiline_macro.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define FACT(n,i) n*i
#define printf1(fact) printf("the factorial of %d is %d\n",n,fact)
int main(void) {
	int n,i,fact=1;
	printf("enter the N value:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=FACT(fact,i);
	}
		printf1(fact);

	return EXIT_SUCCESS;
}
