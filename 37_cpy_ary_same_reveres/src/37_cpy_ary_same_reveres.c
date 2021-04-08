/*
 ============================================================================
 Name        : 37_cpy_ary_same_reveres.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,j;
	printf("enter the size of array:\n");
	scanf("%d",&n);
		int i,a[n],b[n];
		/// input array elements
	printf("enter the elements of array[%d]:\n",n);
		for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	// copying array
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	// print copied array
	printf("\nthe copied array b[%d]=",n);
		for (i=0;i<n;i++)
	{
			printf("%d ",b[i]);
	}
	//// reveresed array
		for(i=n-1,j=0;i>=0;i--)
		{

			b[j]=a[i];
			j++;
		}
		/// print reversed array
		printf("\nthe reversed array is b[%d]=",n);
		for (i=0;i<n;i++)
			printf("%d ",b[i]);

	return EXIT_SUCCESS;
}
