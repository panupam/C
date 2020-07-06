#include<stdio.h>
void prime(int l){
  int prime[l+1],i,j;
  prime[0]=0;
  prime[1]=0;
  for(i=2;i<l+1;i++){
    prime[i]=i;
  }
  for(i=2;i<l+1;i++){
    if(prime[i]==0)continue;
    for(j=i+1;j<l+1;j++){
      if(prime[j]==0)continue;
      if(prime[j]%prime[i]==0){
        prime[j]=0;
      }

    }
  }
for(i=0;i<l+1;i++){
  if(prime[i]!=0){
    printf("%d ",prime[i]);
  }
}

}
int main(){
  int l;
  scanf("%d",&l);
  prime(l);
return 0;
}
