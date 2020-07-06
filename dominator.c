#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define infinity INT_MAX
typedef struct point{
  int x;
  int y;
}point;
void quicksort(point* ,int,int);
void mergesort(point*,int,int ,int);
void copy(point*,point*,int,int);
int compare(point A,point B){

  if(A.x<B.x)return 1;
  else if(A.x==B.x){
    if(A.y<=B.y)return 1;
    else return 0;
  }else return 0;
}
int Dominator(point* A, int* B, int lo,int hi)
{
  int mid=(lo+hi)/2;
  int max1,max2;
  if(lo<hi)
  {
     max1=Dominator(A,B,lo,mid);
     max2=Dominator(A,B,mid+1,hi);
    for(int i=lo;i<=mid;i++){
      if(B[i])continue;
      else{
        if(A[i].y<=max2)B[i]++;
      }
    }
  }else {
    return A[lo].y;
  }
  if(max1<=max2)return max2;
  else return max1;
}
int main(){
  int n,i;
  scanf("%d",&n );
  point A[n];
  int B[n];
  for(i=0;i<n;i++){
    B[i]=0;//initialize B with zero
    scanf("%d %d",&A[i].x,&A[i].y);
  }

  quicksort(A,0,n-1);
  int max=Dominator(A,B,0,n-1);
  for(i=0;i<n;i++){

    if(B[i]==0)printf("%d %d\n",A[i].x,A[i].y);
  }

  return 0;
}
void quicksort(point* A,int lo,int hi) {
  int mid=(lo+hi)/2;
  if(lo<hi){
    quicksort(A,lo,mid);
    quicksort(A,mid+1,hi);
    mergesort(A,lo,mid,hi);
  }
  return;
  /* code */
}
void mergesort(point* A, int lo,int mid,int hi){
  point B[mid-lo+2];
  point C[hi-mid+1];
  int i=0,j=0,k;
  copy(A,B,lo,mid);
  copy(A,C,mid+1,hi);

  for(k=lo;k<=hi;k++){

     if(compare(B[i],C[j])){
      A[k].x=B[i].x;
      A[k].y=B[i].y;
      i++;
    }else{
      A[k].x=C[j].x;
      A[k].y=C[j].y;
      j++;
    }

  }
  return;
}
void copy(point* A,point * B,int lo,int hi){
  int i;
  for(i=0;i<(hi-lo+1);i++){
    B[i].x=A[lo+i].x;
    B[i].y=A[lo+i].y;
  }
  B[i].x=infinity;
  B[i].y=infinity;
  return;
}
