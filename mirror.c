

#include<stdio.h>
int main(){
  int hh,mm;
  scanf("%d:%d",&hh,&mm);
  if(mm==0){
    if(hh<12){
      printf("%d:%d",(12-hh),mm);
    }else printf("%d:%d",hh,mm);
  }
  else if(hh<11){
    printf("%d:%d",(11-hh),(60-mm));
  }
  else if(hh==11){
    printf("%d:%d",12,60-mm);
  }else{
    printf("%d:%d",11,60-mm);
  }
  return 0;
}
