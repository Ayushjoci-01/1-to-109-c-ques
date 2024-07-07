#include<iostream>
using namespace  std;
int main()
{
    int a[90],n,i;
    cout<<"enter the range"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements in array";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}