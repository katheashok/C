/*
 ============================================================================
 Name        : 23_program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float rate(int hr, float p);

int main(void) {
	int hr, i;
	float p, T = 0, t;
	for (i = 0; i < 6; i++) {
		printf(" enter the paise per hour :");
		scanf("%f", &p);
		printf("\n enter the no of hours :");
		scanf("%d", &hr);
	/*}
	for (i = 0; i < 6; i++)
		{*/
			t = rate(hr, p);
			T = T + t;
		}
		printf(" rate  = %.2f", T );
		return EXIT_SUCCESS;
	}
	float rate(int hr, float p) {
		float r1;
		float r2;
		float r, r3;
		if (hr < 40) {
			r = (p * hr)/100;
			printf(" rate  = %.2f",r);
		} else if (hr >= 40 && hr < 60) {
			r1 = p * 40;
			r2 = p * (hr - 40) * 1.5;
			r = (r1 + r2)/100;
			printf(" rate  = %.2f",r);

		} else {
			r1 = (p * 40);
			r2 = p * (20) * 1.5;
			r3 = p * (hr - 60) * 2;
			r = (r1 + r2 + r3)/100;
			printf(" rate  = %.2f",r);

		}
		return r;
	}

