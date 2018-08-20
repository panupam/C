#include<stdio.h>
int count(char* A,char* B,char* C){
  int i=0,count=0,changer=0,j=0;
  while(A[i]!='\0'){
    if(A[i]=='-'){
      count++;
       i++;
       continue;
    }else if(A[i]==' '){
      i++;
      continue;
    }else if(A[i]=='*'){
      changer=1;
      i++;j=0;
      continue;
    }
    if(changer==0){
      B[j]=A[i];
      j++;
    }else{
      C[j]=A[i];
      j++;
    }


  }
  return count;

}

int len(char* A){
  int len=0;
  while(A[len]!='\0'){
    len++;
  }
  return len;
}
void print(char* A){
  int i=0;
  while(A[i]!='\0'){
    printf("%c",A[i] );
  }
  return;
}
int main(){
  char A[100]={'\0'};int i;

  for(i=0;i<100;i++){
    char c;
    scanf("%c",&c );
    if(c=='\n'){
      break;
    }
    A[i]=c;
    //printf("%c",A[i] );
  }
char B[100]={'\0'},C[100]={'\0'};
int minus=count(A,B,C);
print(A);
print(B);
print(C);




  return 0;
}
