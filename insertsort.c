#include<stdio.h>
void swap(int* A,int* B){
	int k;
	k=*B;
	*B=*A;
	*A=k;
	return;
}
void insertsort(int* A,int n){
	int i,j;
	for(i=0;i<n;i++){
		j=i;
		while(j>0){
			if(A[j-1]>A[j]){
					swap(A+j-1,A+j);
					j--;
					}else break;
			}
		}
	return;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",A+i);
	}
	insertsort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}


	return 0;
}
