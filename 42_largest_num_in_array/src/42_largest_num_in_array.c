/*
 ============================================================================
 Name        : 42_largest_num_in_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int lar(int a[10],int size);
int main(void) {
	int size,i,temp;
		printf("enter size of array:\n");
		scanf("%d",&size);
		int a[size];
		printf("enter elements of array:\n");
			for (i=0;i<size;i++)
				scanf("%d",&a[i]);
			temp=lar(a,size);
			printf("\nthe larges tnmber in array is=%d",temp);
	return EXIT_SUCCESS;
}
int lar(int a[10],int size)
{
	int i;
	int temp=0;
	for(i=0;i<size;i++)
	{
		if(a[i]>=temp)
		{
			temp=a[i];
		}
	}

return temp;
}
