#include<stdio.h>
int main(){
  int day;
  scanf("%d",&day);
  switch(day){
    case 1:
    case 7: printf("Weekend");break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6: printf("Weekday");break;
    default: printf("Illigal day");
  }
  return 0;

}
