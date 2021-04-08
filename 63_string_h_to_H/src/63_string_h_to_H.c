/*
 ============================================================================
 Name        : 63_string_h_to_H.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Write a program to convert lower case string to upper case string and vice versa.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	char str[50];
	int n,i;
	printf("enter the string:\n");
	scanf("%[^\n]s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
			if(str[i]>='a' && str[i]<='z')
				str[i]=str[i]-32;
			else if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
	for(i=0;i<n;i++)
		printf("%c",str[i]);
	return EXIT_SUCCESS;
}
