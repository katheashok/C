/*
 ============================================================================
 Name        : 18_found_element.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,ele,flag,size;
	printf("enter the numbers of elements present:\n");
	scanf("%d",&size);
	int a[size];
	printf("enter the elements:\n");
	for (i=0;i<size;i++)
		scanf("%d",&a[i]);
	// printing all elements
		printf("list of elements:\n");
		for (i=0;i<size;i++)
				printf("%d ",a[i]);

	printf("\nenter the element you want to search:\n");
	scanf("%d",&ele);

	// element finding loop
	for (i=0;i<size;i++)
		if(a[i]==ele)
		{
			flag=1;
			break;
		}
	if (flag==1)
		printf("element %d is found\n",ele);
	else
		printf("element %d is not found\n",ele);
		return EXIT_SUCCESS;
}
