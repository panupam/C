#include<stdio.h>
int main(){
  int prev,num,common,last,flag;
  flag =0;
  prev =-2;
  scanf("%d",&num);
  while(num!=-1){
    if(prev==-2){
      prev=num;
      common=prev;
      last=num;
      scanf("%d",&num);
      continue;
    }
    if(prev>num){
      prev=num;
      common=prev;
      last=num;
      scanf("%d",&num);
    }
  }
  return 0;
}
