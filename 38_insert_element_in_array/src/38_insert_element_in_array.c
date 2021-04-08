/*
 ============================================================================
 Name        : 38_insert_element_in_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],p,i,n,v,count=0,x=1,y=0;
		printf("enter the number of elements to be entered:");
		scanf("%d",&n);
		printf("\n enter the arrayof elemnets :");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\n enter the location where to insert :");
		scanf("%d",&p);
		printf("\n enter the value to insert");
			scanf("%d",&v);
			for(i=0;i<=n;i++)
				{
		if(count==1)
			count=2;
				if(i==p)
					{
					y=x-1;
						a[n-y]=a[n-x];
						count++;
						x++;
					}
				if(count>1)
				{
					y=x-1;
					a[n-y]=a[n-x];
				    count++;
                    x++;
				}
				}
			a[p]=v;
				for(i=0;i<=n;i++)
					{
						printf("%d\n",a[i]);
					}
	return EXIT_SUCCESS;
}
