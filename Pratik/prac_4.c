#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Amount : ");
    scanf("%d",&n);
    printf("%d Note(s) of 100\n",n/100);
    n=n%100;
    printf("%d Note(s) of 50\n",n/50);
    n=n%50;
    printf("%d Note(s) of 20\n",n/20);
    n=n%20;
    printf("%d Note(s) of 10\n",n/10);
    n=n%10;
    printf("%d Note(s) of 5\n",n/5);
    n=n%5;
    printf("%d Note(s) of 2\n",n/2);
    n=n%2;
    printf("%d Note(s) of 1\n",n);

    return 0;
    
}