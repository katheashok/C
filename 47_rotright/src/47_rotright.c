/*
 ============================================================================
 Name        : 47_rotright.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int rotate_right(int, int);
int rotate_right(int n, int b) {
	int l,i=0,p,a[20],y=0,x=1,m;
	while (n > 0) {
		a[i++] = n % 2;
		n = n / 2;
	}
	i--;
	for(y=0;y<b;y)
	m=i;
	l=a[i];
		for (i = 0; i <= m; i++) {
			if(i<b)
			{
				i++;
			}
			if (n-y > 0) {

				y = x - 1;
				a[n - y] = a[n - x];
				x++;
			}
		}
		for(n=0;n<b;n++)
		{
			a[n]
		}
		for (i = 0; i <m; i++) {
			printf("%d\n", a[i]);
		}
	return n;
}

int main(void) {
	int res, n, a[10], i = 0;
	int b;
	printf(" enter the bit :");
	scanf("%d", &n);
	int p = n;
	printf(" enter the number of shift :");
	scanf("%d", &b);
	res = rotate_right(n, b);
	return EXIT_SUCCESS;
}
