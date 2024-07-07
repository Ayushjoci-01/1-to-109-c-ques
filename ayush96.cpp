//maxium and min number in array//
#include<iostream>
using namespace std;
int max(int a[],int n);
int min(int a[],int n);
int main()
{
    int a[90],n;
    cout<<"enter the number range"<<endl;
    cin>>n;
    cout<<"enter the element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=max(a,n);
    int result1=min(a,n);
    cout<<"so the max number is "<<result<<endl;
    cout<<"so the min number is "<<result1<<endl;
    return 0;
}
int max(int a[90],int n)
{
    int i;
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min(int a[90],int n)
{
    int i;
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}