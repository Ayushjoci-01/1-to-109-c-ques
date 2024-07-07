#include<stdio.h>
int main()
{
    int a[90],n,i,sum=0;
    printf("enter the range\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    int avg=(float)sum/n;
    printf("sum of the number is %d",sum);
    printf("the avg of the number is %d",avg);
    return 0;
}