#include<stdio.h>
int main(){
  int m,n,i,j;
  int sum=0;
  scanf("%d%d",&m,&n);
  int A[m][n];
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i=0;i<m;i++){
    int sumsq=0;
    for(j=0;j<n;j++){
      sumsq=sumsq+A[i][j];
    }//printf("\n" );
    sum=sum+sumsq*sumsq;
}
  printf("%d",sum);
  return 0;
}
