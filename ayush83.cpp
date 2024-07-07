//sum of n natural number //
#include<iostream>
using namespace std;
int main()

{
    int i,n;
    int sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
}