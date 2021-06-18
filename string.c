#include <stdio.h>
#include <string.h>
int isVowel(char A)
{
	if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U'||A=='Y'||A=='y')
		return 1; 
	else return 0;
}
int isCapital(char A)
{
	if(A<'a')
		return 1;
	else return 0;
}
int main()
{
	char A[101];
	scanf("%s",A);
	for(int i=0;i<strlen(A);i++)
	{
		if(isVowel(A[i]))
			continue;
		else if (isCapital(A[i]))
		{
			printf(".%c",A[i]+'a'-'A');
		} else printf(".%c",A[i]);

	}
	return 0;
}