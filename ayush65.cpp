#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int count=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count;
            count=count+1;
        }
        cout<<endl;
        
    }
}