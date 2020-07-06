#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct vector{
  int* real;
  int* img;
};
/*
int** fft(int B[][2] ){
  printf("%d",sizeof(B));
  return B;
}*/

int main(){
  int d,n,i;
  scanf("%d", &d);
  struct vector A;
  A.real=(int*)malloc(d*sizeof(int));

  for(i=0;i<d;i++){
    scanf("%d",&A.real[i]);
    printf("%d ",A.real[i]);
  }
  /*for(i=0;i<n;i++){
    scanf("%d",&A[i][1]);
  }
  scanf("%d",&n);
  int B[n][2];
  while(i>0){
    B[i][0]=A[i][0];
    B[i][1]=A[i][1];
  }
  for(i=0;i<n-d;i++){
    B[i+d][0]=0;
    B[i+d][1]=0;
  }
int** C=fft(B);*/
return 0;

}
