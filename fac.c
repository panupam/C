/*input
7 4 
*/
#include<stdio.h>
int fact(int r){
  int i=1;
  while(r>0){
    i=i*r;
    r--;

  }
  return i;
}
int main(){
  int n,r;
  scanf("%d %d",&n,&r);
  printf("This is your input %d %d\n", n,r);
  int c=fact(n)/(fact(r)*fact(n-r));
  printf("%d",c);

  return 0;
}
