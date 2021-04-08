/*
 ============================================================================
 Name        : example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
struct time
{
	int hr;
	int min;
	int sec;
};
int main()
{
	struct time TimeUpdate(struct time now);
	struct time CurrentTime, NextTime;
	int DummyTime;
	printf("enter the time in hr:min:sec");
	scanf("%d %d %d",&CurrentTime.hr,&CurrentTime.min,&CurrentTime.sec);
	NextTime=TimeUpdate(CurrentTime);
	DummyTime=NextTime.min;
	while(1)
	{
		NextTime=TimeUpdate(NextTime);
		printf("curent time is %d : %d : %d\n",NextTime.hr,NextTime.min,NextTime.sec);

	}
	return 0;
}
struct time TimeUpdate(struct time now)
{
	++now.sec;
	if(now.sec==60)
	{
		now.sec=0;
		++now.min;
	}
	if(now.min==60)
		{
			now.min=0;
			++now.hr;
		}
	if(now.hr==24)
		{
			now.hr=0;

		}
	return now;
}
