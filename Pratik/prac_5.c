#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Enter %d Elements of Array: ",n);
    int arr[n];
    int sumeven=0,sumodd=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(arr[i]%2)
        sumeven+=arr[i];
        else sumodd+=arr[i];
    }

    if(sumodd>sumeven)
    printf("\n %d",sumodd);
    else printf("\n%d",sumeven);
    return 0;

}