#include <stdio.h>
int max(int, int);
int min(int ,int);

int min(int a,int b){
  return a+b-max(a,b);
}
int max(int a, int b){
  if(a>b)return a;else return b;
}
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("Max=%d,Min=%d",max(a,b),min(a,b));
  return 0;
}
