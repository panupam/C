#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define infinity INT_MAX
void quicksort(int* ,int,int);
void mergesort(int*,int,int ,int);
void copy(int*,int*,int,int);

int main(){
  int n,i;
  scanf("%d",&n );
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",A+i);
  }


  quicksort(A,0,n-1);
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }


  return 0;
}
void quicksort(int* A,int lo,int hi) {
  int mid=(lo+hi)/2;
  if(lo<hi){
    quicksort(A,lo,mid);
    quicksort(A,mid+1,hi);
    mergesort(A,lo,mid,hi);
  }
  return;
  /* code */
}
void mergesort(int* A, int lo,int mid,int hi){
  int B[mid-lo+2];
  int C[hi-mid+1];
  int i=0,j=0,k;
  copy(A,B,lo,mid);
  copy(A,C,mid+1,hi);
  for(k=lo;k<=hi;k++){
   if(B[i]<=C[j]){
      A[k]=B[i];
      i++;
    }else{
      A[k]=C[j];
      j++;
    }
    //return;
  }

  return;
}
void copy(int* A,int * B,int lo,int hi){
  int i;
  for(i=0;i<(hi-lo+1);i++){
    B[i]=A[lo+i];
  }
  B[i]=infinity;
  return;
}
