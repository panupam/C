#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int abso(int c,int d)
{
    if (c>=d) return c-d;
    else return d-c;
}
void merge (int a[],int st,int n)
{
    int k,limi=st+n/2,limj=st+n,i=st,j=st+n/2;
    int temp[n];
    for(k=0;k<n;k++)
    {
        if((i<limi)&&(j<limj))
        {
            if(a[i]<=a[j]) {temp[k]=a[i];i++;}
            else {temp[k]=a[j];j++;}
        }
        else if(i<limi){temp[k]=a[i];i++;}
        else if (j<limj){temp[k]=a[j];j++;}
        
    }
    k=0;
        for (int h=st;h<st+n;h++)
        {
            a[h]=temp[k];
            k++;
        }
}
void merges(int a[],int st,int size)
{
    int n=size;
    if(n<=1) return;
    int mid=n/2;
    merges(a,st,mid);
    merges(a,st+mid,n-mid);
    merge(a,st,n);
}
int main()
{
    int n; 
    scanf("%d",&n);
    int a[n];
    for(int a_i = 0; a_i < n; a_i++)
    {
       scanf("%d",&a[a_i]);
    }
    merges(a,0,n);
    int m=abso(a[0],a[1]);
    for (int i=0;i<n-1;i++)
         {
             int p=abso(a[i],a[i+1]);
             if (m>p){m=p;}
         }
    printf ("%d",m);
    return 0;
}
