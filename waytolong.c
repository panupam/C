#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	char A[n][101];
	for(i=0;i<n;i++)
	{
		scanf("%s",*(A+i));
	}
	for(i=0;i<n;i++)
	{
		int temp=strlen(A[i]);
		if(temp>10)
			printf("%c%d%c\n",A[i][0],temp-2,A[i][temp-1]);
		else printf("%s\n",A[i]);
	}
	return 0;
}