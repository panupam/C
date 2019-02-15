#include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=8;i++){
    for(j=1;j<=5;j++){
      printf("%2d  ",i*j);
    }
    printf("\n");
  }
  j=0;
  i=(j>0)?10:5;
  printf("%d",i);
  return 0;
}
