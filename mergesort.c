#include<stdio.h>
void quicksort(int* ,int,int);
void mergesort(int*,int,int ,int);
void copy(int*,int*,int,int);
//void merge(int* , int* , int* ,int, int,int, int,int );
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
  /*mergesort(A,0,3,5);
  for(i=0;i<6;i++){
    printf("%d ",A[i]);
  }*/

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
  int B[mid-lo+1];
  int C[hi-mid];
  int i=0,j=0,k;
  copy(A,B,lo,mid);
  copy(A,C,mid+1,hi);
  for(k=lo;k<=hi;k++){
    if(i>mid-lo){
      A[k]=C[j];
      j++;
    }else if(j>=hi-mid){
      A[k]=B[i];
      i++;
    }else if(B[i]<=C[j]){
      A[k]=B[i];
      i++;
    }else{
      A[k]=C[j];
      j++;
    }
    return;
  }
  /*for(i=0;i<(mid-lo+1);i++){
    for(j=count-i+1;j<(hi-mid);j++){
      if(B[i]<=C[j]){
        A[count+lo]=B[i];
        count++; //printf("Voila");

      }else{
        A[count+lo]=C[j];
        count++;
      }
    }
  }*/
  //merge(A,B,C,lo,mid,mid+1,hi,lo);
  return;
}
void copy(int* A,int * B,int lo,int hi){
  int i;
  for(i=0;i<(hi-lo+1);i++){
    B[i]=A[lo+i];
  }
  return;
}
/*void merge(int* A, int* B,int* C,int lo,int mid,int mid2,int hi,int call){
  if(lo>mid){
    A[call]=C[mid2];
    merge(A,B,C,)
  }
  if(B[lo]<=C[mid2]){
    A[call]=B[mid-lo];
    printf("%d b",A[call]);
    merge(A,B+1,C,lo+1,mid,mid2,hi,call+1);
  }else{
    A[call]=C[hi-mid2];
    printf("%d v",A[call]);
    merge(A,B,C+1,lo,mid,mid2+1,hi,call+1);
  }
  return;
}*/
