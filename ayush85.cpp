#include<iostream>
using namespace std;
int main()
{
    int x,y,i;
    int sumo=0,sume=0;
    cout<<"enter the value of x AND y";
    cin>>x>>y;
    
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            sumo=sumo+i;
        }
        else if(i%2!=0)
        {
            sume=sume+i;
        }

    }
    cout<<"the sum of the odd number is "<<sumo<<endl;
    cout<<"the sum of the even number is"<<sume<<endl;
}