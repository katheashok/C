/*
 ============================================================================
 Name        : concat_41.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n1,n2,j;
	printf("enter the size of array1:");
	scanf("%d",&n1);
	int a[n1];
	printf("enter the size of array2:");
		scanf("%d",&n2);
	int b[n2],r[n1+n2];
	printf("\n enter the array of elemnets :");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the array of elemnets :");
	for(i=0;i<n2;i++)
		{
			scanf("%d",&b[i]);
		}
	for(i=0;i<=n1;i++)
	{
		r[i]=a[i];
		if(i==n1)
		for(j=0;j<n2;j++)
		{
			r[i+j]=b[j];
		}
	}
	printf("\n the concatinated array of elemnets :");
	for(i=0;i<(n1+n2);i++)
		{
			printf("%d",r[i]);
		}

	return EXIT_SUCCESS;
}
