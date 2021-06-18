#include<stdio.h>
int main()
{
int A=0,B=0,C=0,D=0;
float E;
int i;
for (int i = 0; i <30; ++i)
{
	scanf("%f",&E);
	E=E/3;
	if(E>=90)
		A++;
	if(E>=80)
		B++;
	if(E>=65)
		C++;
	if(E>=50)
		D++;

}

printf("A=%d,B=%d,C=%d,D=%d",A,B,C,D);
return 0;




}