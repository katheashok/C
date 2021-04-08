/*
 ============================================================================
 Name        : 16_operationss_matrices.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[30][30], b[30][30], i, j, n, add[30][30], sub[30][30], menu;
	printf("enter the size of array");
	scanf("%d", &n);
	printf("enter the A array of elements :");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the B array of elements :");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	back : printf("\n Enter 1 for addition");
	printf("\n Enter 2 for substraction");
	printf("\n Enter 3 for multiplication");
	scanf("%d", &menu);
	switch (menu) {
	case 1:
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				add[i][j] = a[i][j] + b[i][j];
			}
		}
		printf("addition is:\n");
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf(" %d\t", add[i][j]);
			if (i == 0 && j==1) {
				printf("\n");
			}
			}
		}
		break;
	case 2:

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				sub[i][j] = a[i][j] - b[i][j];
			}
		}
		printf("subtraction is:\n");
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf("%d\t", sub[i][j]);
			if (i == 0 && j==n/2) {
				printf("\n");
			}
			}
		}
		break;

	case 3:
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					add[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("addition is:\n");
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					printf(" %d\t", add[i][j]);
				if (i == 0 && j==n/2) {
					printf("\n");
				}
				}
			}

	}
	goto back;
	return EXIT_SUCCESS;
}
