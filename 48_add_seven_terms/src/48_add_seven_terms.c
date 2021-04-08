/*
 ============================================================================
 Name        : 48_add_seven_terms.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float fact(int);
int main() {
	int i, n;
	float sum;
	printf("enter the number of terms :");
	scanf("%d", &n);
	sum = 1.000;
	for (i = 2; i <= n; i++) {
		if (i % 2 == 0) {
			sum =  (sum + (float) (i / fact(i)));
		} else {
			sum = (sum - (float) (i / fact(i)));
		}
	}
	printf("%f", sum);
	return EXIT_SUCCESS;
}
float fact(int x) {
	float f=1;
	if (x == 1) {
	return f;
	} else {
		f = x * fact(x - 1);
	}

}
