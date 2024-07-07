//Write a C program to print square of n numbers, where value of n is inputted by the user.//
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i;
    cout<<"enter the value of n give the number range"<<endl;
    cin>>n1;
    cout<<"enter the number "<<endl;
    cin>>n2;
    for(i=1;i<=n1;i++)
    {
        cout<<"the squre of the number is" <<n2*n2<<endl;
        break;

    }
    return 0;
}
