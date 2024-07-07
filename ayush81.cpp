//break and continue condition//
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(;i<=n;i++)
    {
        if(i==4)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}