//sum of the number//
#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int a,b,j;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    j=sum(a,b);
    cout<<"so the sum of a and b is"<<j<<endl;
    return 0;
}
int sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}