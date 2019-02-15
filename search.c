#include<stdio.h>
/*int search(int* A,int key,int lo, int hi){
  if(lo>hi){
    return 0;
  }
  if(A[lo]==key){
    return 1;
  }else{
    return search(A,key,lo+1,hi);
  }
}*/
int search(int* A,int key,int n){
  if(n<0)return 0;
  if(A[n]==key){
    return 1;
  }else return search(A,key,n-1);
}

int main(){
  int n,key,i;
  scanf("%d%d",&n,&key);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",A+i);
  }
  if(search(A,key,n-1)){
    printf("Found");
  }else printf("Not Found");
  return 0;
}
