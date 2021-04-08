/*
 * assignment_31.c
 *
 *  Created on: 25-Aug-2019
 *      Author: desd
 */


/*NOT COMPLETE */


#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50];
	int l,s;
	printf("Enter your name");
	gets(arr);
	printf("Name : ");
	puts(arr);
	l = strlen(arr) ;
	s = sizeof(l);
	printf("Length = %d\n",l);
	printf("Size = %d\n",s);

}

