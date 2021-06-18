#include<stdio.h>
int main()
{ 
	int i=6,j;
	while(i>0)
	{	
		i--;
		if(i%2==0)
		{
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			for(;j<6;j++)
			{
				printf("@");
			}
			printf("\n");
		}
		else{
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			for(;j<6;j++)
			{
				printf("$");
			}
			printf("\n");
		}
	}
	return 0;
}