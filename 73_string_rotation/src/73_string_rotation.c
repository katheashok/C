/*
 ============================================================================
 Name        : 73_string_rotation.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[50];
	int i,j,k,l;
	char temp[2];
	printf("enter the string:\n");
	scanf("%[^\n]s",&s);
	l=strlen(s);

		
	for(k=0;k<=l-1;k++)
	{
	    for(j=0;j<=l-1;j++)
	    {
		temp[0]=s[0];
		for (i=0;i<l-1;i++)
		{
			s[i]=s[i+1];
		}
		s[l-1]=temp[0];
		
		for(j=0;j<=l-1;j++)
		printf("%c",s[j]);
		printf("\n");
	    }
		printf("\n");
	}
	return EXIT_SUCCESS;
}
