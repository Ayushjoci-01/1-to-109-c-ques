#include<iostream>
using namespace std;
int main()
    {
        int i,j,n;
        char count='A';
        cout<<"enter the value of n"<<endl;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                cout<<count;
                count=count+1;

            }
            cout<<endl;
        }

    }