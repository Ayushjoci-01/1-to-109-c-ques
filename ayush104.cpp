/*Write a C program which calculate and print sum and average of elements of an array*/
#include<stdio.h>
int sum(int a[],int n);

int main()
{
    int a[90],n,i;
    printf("enter the range");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r1=sum(a,n);
    int avg=r1/n;

    printf("so the sum of the num is %d",r1);
    printf("so the avg is %d",avg);


    return 0;

}
int sum(int a[90],int n)
{
    int i;
    int totalsum=0;
    for(i=0;i<n;i++)
    {
        totalsum=totalsum+a[i];
    }
    return totalsum;
}

