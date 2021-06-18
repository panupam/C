#include<stdio.h>
#include<string.h>
int count;
char A[101];
void plus()
{
	if(strlen(A)/2>count)
	
	{
		printf("+");
		count++;
	}
return;
}
int main()
{
	
	int sum1=0;
	int sum2=0;
	count=0;
	int sum3=0;
	scanf("%s",A);
	int len=strlen(A);
	if(len>2)
	{
		for(int i=0;i<len;i+=2)
		{
			if(A[i]=='1') 
				sum1++;
			else if (A[i]=='2')
				sum2++;
			else sum3++;
		}
	}else printf("%s",A);
	//if()
	for(int j=0;j<sum1;j++)
	{
		printf("1");
		plus();
	}
	for(int j=0;j<sum2;j++)
	{
		printf("2");
		plus();
	}
	for(int j=0;j<sum3;j++)
	{
		printf("3");
		plus();
	}
	return 0;
}