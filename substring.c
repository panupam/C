#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char A[100];
  int i,j,nstring,k=0;
  scanf("%s",A);
  int len=strlen(A);
  nstring=len*(len+1)/2;
  char ** ptr=(char**)malloc(nstring*sizeof(char*));
  for(i=0;i<len;i++){
    for(j=i;j<len;j++){
      ptr[k]=strndup(A+i,j-i+1);
      printf("%s\n",ptr[k]);
      k++;
    }
  }
/*  for(i=0;i<len+1;i++){
    for(j=i;j<len;j++){
      char *ptr=(char *)malloc((len-j+1)*sizeof(char));
      strncpy(ptr,A+i,len-j);
      printf("%s\n",ptr);

    }
  }
  free(ptr);
*/
  return 0;

}
