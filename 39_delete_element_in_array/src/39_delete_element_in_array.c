/*
 ============================================================================
 Name        : 39_delete_element_in_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],p,i,n,count=0;
	printf("enter the number of elements to be entered:");
	scanf("%d",&n);
	printf("\n enter the arrayof elemnets :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the number which is to be deleted:");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
	if(count==1)
	count=2;
		if(a[i]==p)
		{
		      a[i]=a[i+1];
		      count++;
		}
		if(count>1)
		{
			a[i]=a[i+1];
		}
	}
		for(i=0;i<n-1;i++)
		{
			printf("%d\n",a[i]);
		}

	return EXIT_SUCCESS;
}
