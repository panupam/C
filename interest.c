#include<stdio.h>
int main(){
  double rate,amount;
  scanf("%lf,%lf",&rate,&amount);
  amount=amount*(1+2*rate/100);//Simple interest at Rate=rate for 2 years 
  printf("%.2lf\n",amount);
  amount=amount*(1+rate/100)*(1+rate/100);//compond interest for two year at Rate=rate
  printf("Loan at the end of 4th year is %lf",amount);



  return 0;

}
