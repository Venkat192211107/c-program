#include<stdio.h>
int main()
{
	int year,date,month;
	printf("enter date:");
	scanf("%d",&date);
	printf("enter month:");
	scanf("%d",&month);
	printf("enter year:");
	scanf("%d",&year);
	printf("%d/%d/",date,month);
	if(year%400==0)
	{
		printf("%d is a leap year",year);
	}
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
	else if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year");
	}
	return 0;
}
