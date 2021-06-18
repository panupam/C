#include <stdio.h>
/*void swap(int *A,int *B)
{
	int temp=*A;
	*A=*B;
	*B=temp;
}*/
void insertsort(int *A,int r)
{
	int i;
	for(i=0;i<r;i++)
	{
		if(A[r]>A[i])continue;
		int temp=A[r];
		while(r>i)
		{
			A[r]=A[r-1];
			r--;
		}
		A[i]=temp;
		break;
	}
}
void sort(int *A,int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		insertsort(A,i);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",A+i);
	}

	sort(A,n);
	printf("This is the sorted array of %d elements\n",n );
	for(i=0;i<n;i++)
	{
		printf("%d ", *(A+i));
	}

	return 0;
}