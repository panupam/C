#include<stdio.h>
void greedy(int n){
  int C[5]={10,5,3,2,1};
  int D[5]={0};
  int i;
  for(i=0;i<5;i++){
    D[i]=n/C[i];
    n=n%C[i];
    if(n==0)break;
  }
  for(i=0;i<5;i++){
  printf("%d rupee coin:%d\n",C[i],D[i]);
}
return;

}
int main(){
  int n;
  scanf("%d",&n);
  greedy(n);
  return 0;
}
