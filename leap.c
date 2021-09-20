/*
Program to find if the given year is leap Year or Not. 
*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year: ");	
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)printf("\n%d is a leap year\n",year );
			else printf("\n%d is not a leap year\n",year);
		}else 
			printf("\n%d is a leap year\n",year );
	}else 
		printf("\n%d is not a leap year\n",year);
	return 0;
}