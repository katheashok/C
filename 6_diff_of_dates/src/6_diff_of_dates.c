/*
 ============================================================================
 Name        : 6_diff_of_dates.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int d1,d2,m1,m2,y1,y2,d,m,y,m_d,y_d,t_d;
	printf("enter the date1 as: dd/mm/yy");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("enter the date1 as: dd/mm/yy");
	scanf("%d/%d/%d",&d2,&m2,&y2);

	if(d2<d1)
	{
		if(m2==3)
		{
			if((y2%100!=0 && y2%4==0)|| y2%400==0)
				d2=d2+29;
			else
				d2=d2+28;
		}
		else if((m2==4) || (m2==6) || (m2=9) || (m2==11))
			d2=d2+30;
		else
			d2=d2+31;
		m2=m2-1;
	}
	if(m2<m1)
	{
		y2=y2-1;
		m2=m2+12;
	}
	y=y2-y1;
	m=m2-m1;
	d=d2-d1;
	if(y1==y2)
	{
		if ((y2%100!=0 && y2%4==0 )|| y2%400==0)
			d=d+1;
	}
	if(y%4==0)
	{
		d=d+(y/4);
	}
	y_d=y*365;
	m_d=m*30;
	t_d=y_d+m_d+d;
	printf("difference between two dates is:\n");
	printf("%d years %d months %d days: total %d days",y,m,d,t_d);
	return EXIT_SUCCESS;
}
