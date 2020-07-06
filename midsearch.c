#include<stdio.h>
int search(int* A,int key,int start, int end){
  if(start>end) return 0;
  int mid=(start+ end)/2;
  if(A[mid]==key)return 1;
  else return search(A,key,start,mid-1)||search(A,key,mid+1,end);

}
int main(){
  int n,key,i;
  scanf("%d %d",&n,&key);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",A+i);
  }
  if(search(A,key,0,n-1))printf("True");else printf("False");
  return 0;

}
