#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter number of Students and Subjects : ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        int roll;
        printf("Enter Roll Number : ");
        scanf("%d",&roll);
        int mark,sum=0;
        printf("Enter Marks of %d Subjects for Roll No %d :",m,roll);
        for(j=0;j<m;j++)
        {
            scanf("%d",&mark);
            sum+=mark;
        }
        if(sum/m>=60)
        {
            printf("\n Total Marks = %d (First Division)",sum);
        } else if (sum/m>=45)
        {
            printf("\n Total Marks = %d (Second Division)",sum);
        }
        else if (sum/m>=30)
        {
            printf("\n Total Marks = %d (Third Division)",sum);
        }
        else
        {
            printf("\n Total Marks = %d (Failed)",sum);
        }
        printf("\n");
    }

    return 0;

}