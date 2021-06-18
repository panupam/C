#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>
int main()
{
	char A[25]="Indian Subcontinent";
	printf("%s\n",A);
	printf("%-0.7s\n",A);
	int k=strcmp("Mello","Hello");
	char p=tolower('A');
	printf("%d\n",k);
	printf("%c",p);
	return 0;
}