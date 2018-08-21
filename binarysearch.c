#include<stdio.h>
int search(int* A,int key,int lo,int hi){

	if(lo>hi)return 0;
	int mid=(lo+hi)/2;
	if(A[mid]==key)return 1;
	else if(A[mid]>key)return search(A,key,lo,mid-1);
	else if(A[mid]<key)return search(A,key,mid+1,hi);
}
int main(){
	int n,key,i;
	scanf("%d%d",&n,&key);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",A+i);
	}
	if(search(A,key,0,n-1))printf("Found");
	else printf("Not Found");
	return 0;
}
