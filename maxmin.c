#include<stdio.h>
int max(int, int);
int min(int, int);
int max(int a, int b){
  return a>b?a:b;
}
int min(int a,int b){
  return a+b-max(a,b);

}
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("Max is %d",max(a,b));
  printf("\nMin is %d",min(a,b));
  return 0;
}
