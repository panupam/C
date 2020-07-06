#include<stdio.h>
void swap(int* A,int* B){
  int k;
  k=*A;
  *A=*B;
  *B=k;
  return;
}
void bubblesort(int* A,int n){
  if(n==1)return;
  int i;
  for(i=1;i<n;i++){
    if(A[i]<A[i-1]){
      swap(A+i,A+i-1);
    }
  }
  bubblesort(A,n-1);

}
int main(){
  int n,i;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",A+i);
  }
  bubblesort(A,n);
  for (i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  return 0;
}
