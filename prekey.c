#include<stdio.h>
int prekey(int* A,int key,int lo,int hi){
	if(A[lo]>=key)return -1;
	if(hi-lo==1){
		if(A[hi]==key)return lo;
		else return hi;
	}
	else if(hi==lo){
		return lo;
	}
	int mid=(lo+hi)/2;
	if(A[mid]>=key){
		return prekey(A,key,lo,mid-1);
	}else return prekey(A,key,mid,hi);
}
int main(){
	int n,key,i;
	scanf("%d%d",&n,&key);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",A+i);
	}
	int keyindex=prekey(A,key,0,n-1);
	if(keyindex==-1)printf("No Predecessor found\n");
	else printf("Predecessor Key: %d\n",A[keyindex]);
	return 0;
}
