/*Write a C Program to print the elements of array in reverse order*/
#include<stdio.h>
int main()
{
    int a[90],n;
    printf("enter the range");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array in rev order is");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}