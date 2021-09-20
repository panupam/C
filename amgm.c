#include <stdio.h>
 #include<math.h>
  static int SF=30;//scale factor
   int main() {
        int i; float x,y;
        int c=1/sqrt(2*3.14159);
         for(x=-3;x<=3;x+=1.0/SF) { printf("\n |"); y=exp(-x*x/2); for(i=0;i<y*SF;i++) printf(" "); printf("*"); } return 0; }