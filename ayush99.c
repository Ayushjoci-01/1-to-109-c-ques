#include<stdio.h>
int search(int a[],int n,int key);
int main()
{
    int n,key,a[90];
    printf("enter the range of \n");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want search\n");
    scanf("%d",&key);
    key=search(a,n,key);
    if(key)
    {
        printf("elements are found");
    }
    else 
    {
        printf("elements are not found");
    }
    return 0;
}

int search(int a[],int n,int key)
{
    for(int i=0;i<=n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
    return 0;

}