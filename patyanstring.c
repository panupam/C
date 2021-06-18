#include<stdio.h>
#include<string.h>
void strlwr(char* A)
{
	int len=strlen(A);
	for(int i=0;i<len;i++)
	{
		*(A+i)=tolower(*(A+i));
	}
	return;
}
int main()
{
	char A[101],B[101];
	// char a[101],b[101];
	scanf("%s",A);
	scanf("%s",B);
	strlwr(A);
	strlwr(B);
	//printf("%s\n",A);
	//printf("%s\n",B);
	int n=strcmp(A,B);
	if(n==0)
		printf("0");
	else if (n>0)
		printf("1");
	else printf("-1");
return 0;
}