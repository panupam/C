#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct NumOp{
  char type;
  char op;
  float num;
}NumOp;
typedef struct ListNode{
   NumOp* record;
   struct ListNode* next;
}ListNode;
int main(){
  int A;
  scanf("%d",&A);
  NumOp pka;
  if(A==1){
    pka.type='n';
    scanf("%f",&(pka.num));
  }else {
    pka.type='o';
    scanf(" %c",&(pka.op));
  }
  if(pka.type=='o'){
    printf("The operator is %c\n",pka.op);
  }else {
    printf("Number is %f\n",pka.num);
  }
  ListNode* stack=(ListNode*)malloc(sizeof(ListNode));
  stack->next=NULL;
  stack->record=&pka;
  if(stack->record->type=='o'){
    printf("This is operator %c\n",stack->record->op );
  }else{
    printf("This is Number %f\n",stack->record->num );
  }
  return 0;
}
