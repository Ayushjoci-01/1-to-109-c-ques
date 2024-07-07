#include<iostream>
using namespace std;
int sum(int a[],int n);
int main()
{
    int n,a[90];
    cout<<"enter the number range"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=sum(a,n);
    if(result%2==0)
    {
        cout<<"so the number is even"<<endl;
    }
    else if(result%2!=0)
    {
        cout<<"so the number is odd"<<endl;
    }
    cout<<"so the sum of the number"<<result<<endl;
    return 0;
}
int sum(int a[90],int n)
{
    int i;
    int totalsum=0;
    for(int i=0;i<=n;i++)
    {
        int totalsum=totalsum+i;
    }
    return totalsum;
}