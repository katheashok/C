/*
 ============================================================================
 Name        : 82_delete_comments_c_file.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */ //delete comments from c file.


#include<stdio.h>
#include<string.h>

int main()
{
	FILE *in,*out;
	int c;
	in=fopen("/home/desd/41_42/delete_coments.txt","r"); //opening a file
	out=fopen("tested.txt","w");//opening output file to write data to it

	while((c=fgetc(in)) != EOF)
	{
		if(c == '/') /* cheking conditions that are formally exist in file comments
				and try to delete them*/
		{
			if((c=fgetc(in)) == '/')
			{
				while((c=fgetc(in) != '\n'));

			}
			else if(c=fgetc(in)) == '*')
			{
				while((c=fgetc(in)) != EOF)
				{
					if( ((c/*=fgetc(in))*/ == '*') && ((c=fgetc(in)) == '/')  )
						break;//jumps out of loop
				}
			}//else if end
			else
			fputc('/',out);//puts '/' in output file
		}//if end
		else
			fputc(c,out);
	}// while end
	printf("deleted successfully");
return 0;
}

