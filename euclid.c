#include<stdio.h>
int isprime(int);
void euclid(int);
int primorial(int);

void euclid(int n){
  int eu;
  for(int i=1;i<=n;i++){
    eu=primorial(i)+1;
  if(isprime(eu)==1){
    printf("%d : Prime\n",eu );
  }else{
    printf("%d :Composit\n",eu);
  }}
  return;
}
int main(){
  int n;
  scanf("%d",&n);
  //euclid(n);
  //int b=isprime(n);
  //printf("%d\n",b);
  euclid(n);


  return 0;
}

int isprime(int p){
  if(p==2)return 1;
  int j=2;
  while(j<p){
    if(p%j==0){
      return 0;
    }
    j++;
  }
  return 1;
}
int primorial(int n){
  int mult=1,count=0,j=2;
  if(n==1)return mult*j;
  while(count<n){
    if(isprime(j)==1){
      printf("%d\n",j);
      count++;
      mult=mult*j;

    }
    j++;

  }
  return mult;
}
