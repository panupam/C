#include<stdio.h>
int nextkey(int* A,int key,int lo,int hi){
	if(A[hi]<=key)return -1;
	//printf("%d ",A[hi]);
	if(hi-lo==1){
		if(A[lo]==key)return hi;
		else return lo;

	}else if(hi==lo){
		return hi;
	}
	int mid=(lo+hi)/2;
	if(A[mid]>key) return nextkey(A,key,lo,mid);
	else return nextkey(A,key,mid+1,hi);
}
int main(){
	int n,key,i;
	scanf("%d%d",&n,&key);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",A+i);
	}
	int keyindex=nextkey(A,key,0,n-1);
	if(keyindex==-1)printf("No Successor found\n");
	else printf("Sucessor Key: %d\n",A[keyindex]);
	return 0;
}
