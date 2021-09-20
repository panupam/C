#include<stdio.h>
#include<string.h>
int main()
{
    
    int c;
    
    int vowel=0,cons=0,digit=0,white=0;
    printf("Enter the Sequence of String: ");
    c=getchar();
    while (c!='\n')
    {
        char ch=c;
        
        if(' '==ch)white++;
        else if(ch<='9'&&ch>='0')
        digit++;
        else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        vowel++;
        else
        cons++;
        c=getchar();

    }
    printf("\nNumbers of Vowel=%d\nNo of Consonent=%d\nNumber of Digits=%d\nNo of Whitespace=%d ",vowel,cons,digit,white);
    return 0;
    
}