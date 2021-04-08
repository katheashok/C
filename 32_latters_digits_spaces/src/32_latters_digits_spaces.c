/*
 ============================================================================
 Name        : 32_latters_digits_spaces.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char ch[80];
int i=0;
int alpha=0,digi=0,blank=0,tab=0;
printf("enter the string:\n");
scanf("%[^\n]s",ch);
while(ch[i]!='\0')
{
	if (((ch[i]>='A')&&(ch[i]<='Z'))||((ch[i]>='a')&&(ch[i]<='z')))
		alpha++;
	else if((ch[i]>='0')&&(ch[i]<='9'))
		digi++;
	else if(ch[i]==' ')
		blank++;
	else if (ch[i]=='\t')
		tab++;
	else
		break;
	i++;

}
printf("\n number of Characters=%d",alpha);
printf("\n number of digits=%d",digi);
printf("\n number of spaces=%d",blank);
printf("\n number of tabs=%d",tab);
	return EXIT_SUCCESS;
}
