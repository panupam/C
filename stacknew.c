#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct NumOp{
  char type;
  double num;
  char op;
}NumOp;
typedef struct ListNode{
  NumOp record;
  struct ListNode* next;
}ListNode;
ListNode* CreateStack(){
  ListNode* New;
  New=NULL;
  return New;
}
int isEmpty(ListNode* S){
  if(!S)return 1;
  return 0;
}
void Push(ListNode** S,NumOp* key){
  ListNode* NewHead=(ListNode*)malloc(sizeof(ListNode));
  NewHead->next=*S;
  NewHead->record=*key;
  *S=NewHead;
}
NumOp Top(ListNode* S){
  return S->record;
}
NumOp Pop(ListNode** S);
int main(){
  ListNode* List=CreateStack();
  ListNode** Head=&List;
  int  n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    int process;
    scanf("%d",&process);
    //printf("Scanned Process%d",process);
    if(process==1){
      float newnum;
      scanf("%f",&newnum );
      //printf("Scanned%f",newnum);
      NumOp newnumop;
      newnumop.type='n';
      newnumop.num=newnum;
      Push(Head,&newnumop);
      printf("$\n");
    }else if(process==2){
      char newop;
      scanf(" %c",&newop);
      NumOp newnumop;
      newnumop.type='o';
      newnumop.op=newop;
      Push(Head,&newnumop);
      printf("$\n");
    }else if(process==3){
      if(isEmpty(*Head))printf("error\n");
      else{
        NumOp top;
        top=Top(*Head);
        if(top.type=='o')printf("%c\n",top.op );
        else printf("%f\n",top.num);
      }
    }else if(process==4){
        if(isEmpty(*Head))printf("True\n");
        else printf("False\n");
    }
    else if(process==5){
      if(isEmpty(*Head))printf("error\n");
      else{
        NumOp New;
        New=Pop(Head);
        if(New.type=='o')printf("%c\n",New.op );
        else printf("%f\n",New.num);

      }

    }
  }

}
NumOp Pop(ListNode** S){
  NumOp New=(*S)->record;
  ListNode* temp;
  temp=(*S)->next;

  *S=temp;

  return New;
}
