#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char A[100];
  int i,j;
  scanf("%s",A);
  int len=strlen(A);
  for(i=0;i<len+1;i++){
    for(j=i;j<len;j++){
      char *ptr=(char *)malloc((len-j+1)*sizeof(char));
      strcpy(ptr,A+j);
      printf("%s\n",ptr);

    }
  }

  return 0;

}
