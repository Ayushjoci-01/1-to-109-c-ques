#include<iostream>
using namespace std;
int name(int num);
int main()
{
    int num,j;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    j=name(num);
    return 0;

    
}
int name(int num)
{
    
    if(num%2==0)
    {
        cout<<"the given number is even number"<<endl;
    }
    else if(num%2!=0)
    {
        cout<<"so the given number is odd number"<<endl;
    }
    return num;
}
