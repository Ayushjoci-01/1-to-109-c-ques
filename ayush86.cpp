//write a c++ program to convert decimal into a binary//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=0,bit,ans=0;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i++;

    }
    cout<<"Binary number is"<<ans<<endl;

}