#include<iostream>
using namespace std;
int sum(int a[],int n);
int main()
{
    int a[90],n,i;
    cout<<"enter the elements range"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=sum(a,n);
    cout<<"so the sum of the number is "<<result<<endl;
    return 0;
    
}
int sum(int a[90],int n)
{
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
         totalsum += a[i];
    }
    return totalsum;
}