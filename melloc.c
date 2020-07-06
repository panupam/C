#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,m,i;
  scanf("%d%d",&n,&m);
  int *powr=(int *)malloc(m*sizeof(int));
  powr[0]=1;
  printf("%d ",*powr);
  for(i=1;i<m+1;i++){
    powr[i]=powr[i-1]*n;
    printf("%d ",*(powr+i));
  }
  int* great=powr;
  free(great);
  free(powr);
  return 0;

}
