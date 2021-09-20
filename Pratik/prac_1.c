#include<stdio.h>
void swap(int* A,int* B){
	int k;
	k=*B;
	*B=*A;
	*A=k;
	return;
}
int main()
{
    int n,i,j;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Enter the numbers :");
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",A+i);
    }
  for(i=0;i<n;i++){
		j=i;
		while(j>0){
			if(A[j-1]>A[j]){
					swap(A+j-1,A+j);
					j--;
			}else break;
		}
	}
        
    
    printf("The numbers arranged in ascending order are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;

}