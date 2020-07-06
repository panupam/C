#include<stdio.h>
int main (){
    int n,p,q,i=3,k;
    scanf("%d %d %d",&n,&p,&q);
    int prepre=0;
    int pre=1;
    int sn;
    while(i<=n){
      sn=p*pre+q*prepre;
      prepre=pre;
      pre=sn;
      if(i==5)printf("%d ",sn);
      i++;

    }
    printf("%d\n",sn );


   return 0;
}
