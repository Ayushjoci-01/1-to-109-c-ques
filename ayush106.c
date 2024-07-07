/*Write a C program to print elements of an array greater than average*/
#include<stdio.h>
int main()
{
    int a[90],n,sum=0,avg,i,c;
    printf("enter the range");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("so the avg of the number is %d",avg);
    if(a[i]>avg)
    {
        printf(" grater then elemeant %d",a[i]);
        c++;

    }
    printf("total ele grater then %d",c);
    return 0;
}