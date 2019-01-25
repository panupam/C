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
  //printf("#\n");
}
NumOp Top(ListNode* S){
  return S->record;
}
NumOp Pop(ListNode** S);


float Solve(ListNode** S){
  ListNode* newstack=CreateStack();
  ListNode** pointer=&newstack;
  NumOp newvar,var,var1,pushvar;
  while(!isEmpty(*S)){
    newvar=Pop(S);
    if(newvar.type=='o'){
      var=Pop(pointer);
      var1=Pop(pointer);
      if(newvar.op=='+'){
        pushvar.type='n';
        pushvar.num=var.num+var1.num;
        Push(pointer,&pushvar);
      }else if(newvar.op=='-'){
        pushvar.type='n';
        pushvar.num=var.num-var1.num;
        Push(pointer,&pushvar);
      }else if(newvar.op=='*'){
        pushvar.type='n';
        pushvar.num=var.num*var1.num;
        Push(pointer,&pushvar);
      }else{
        pushvar.type='n';
        pushvar.num=var.num/var1.num;
        Push(pointer,&pushvar);
      }
    }else{
      Push(&newstack,&newvar);
    }

  }
  return (*pointer)->record.num;
  }


int main(){
  ListNode* List=CreateStack();
  ListNode** Head=&List;
  int input;
  while((input=getchar())!=EOF&((char)input!='\n')){
    //if()
    char input1=input;
    if(input1==' ')continue;
    //printf("%c$\n",input1);
    if(input1>='0'&input1<='9'){
      NumOp newnumop;
      newnumop.type='n';
      newnumop.num=(float)(input1-'0');
      //printf("%f$",newnumop.num);
      Push(Head,&newnumop);

      //printf("%f$\n",(*Head)->record.num);
    }else {
      NumOp newnumop;
      newnumop.type='o';
      newnumop.op=input1;
      Push(Head,&newnumop);
      //printf("%c$\n",(*Head)->record.op);
    }
  }
  float eval=Solve(Head);

  printf("%f\n",eval);

  return 0;
}
NumOp Pop(ListNode** S){
  NumOp New=(*S)->record;
  ListNode* temp;
  temp=(*S)->next;

  *S=temp;
  //printf("$\n");
  return New;
}
