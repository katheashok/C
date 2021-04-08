/*
 * 36_largest_no.c
 *
 *  Created on: 03-Sep-2019
 *      Author: desd
 */

#include<stdio.h>
int main()
{
	int n,a[10],i;
	int large,small,sl,ss;

	printf("enter the no of elements of array");
	scanf("%d",&n);
printf("Enter the elements of array");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
large=a[0];
small=a[0];
for (i=1;i<n;++i)
{
if (a[i]>large)
	large=a[i];
if (a[i]<small)
 	small=a[i];
}
printf("large =%d \n",large);
printf("Small =%d",small);




return 0;
}
