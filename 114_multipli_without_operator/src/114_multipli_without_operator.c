/*
 ============================================================================
 Name        : 114_multipli_without_operator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,res=0;
	printf("enter the number1:");
	scanf("%d",&num1);
	printf("\nenter the number2:");
	scanf("%d",&num2);
	while (num2!=0)
	{
		if(num2&1)
			res=res+num1;
       num1=num1<<1;
       num2=num2>>1;
	}
		printf("\nresult after multilicaton without * operator is: %d",res);
	return EXIT_SUCCESS;
}
