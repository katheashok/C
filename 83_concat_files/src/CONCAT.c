/*
 ============================================================================
 Name        : 83_concat_files.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp,*fp1,*fp2;
	char c,f;
	fp=fopen("source1.txt","r");
	fp1=fopen("source2.txt","r");
	fp2=fopen("target.txt","w");
	if(fp==NULL ||fp1== NULL)
		printf("error in reading file");
	else
	{
	while((c=fgetc(fp))!=EOF){

		if(c==EOF)
			break;
		fputc(c, fp2);
	}
	printf("File1 is copied to target");

	fclose(fp);

	while(f!=EOF){
		f=agetc(fp1);
		putc(f,fp2);
		}
	printf("\nFile2 is copied to target");
	}

	fclose(fp1);
	fclose(fp2);
	return EXIT_SUCCESS;
}
