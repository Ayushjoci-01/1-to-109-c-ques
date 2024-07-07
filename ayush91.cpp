#include<iostream>
using namespace std;
int max(int a[],int n );
int min(int a[],int n);
int main()
{
    int a[90],n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    int ma=max(a,n);
    int mi=min(a,n);
    cout<<"so the max number is"<<ma<<endl;
    cout<<"so the min number is"<<mi<<endl;
    return 0;

}
int max(int a[90],int n )
{
    int max=a[0];
    for(int i=0;i<=n;i++)
    {
        if(a[i]>n)
        {
            max=a[i];

        }

    }
    return max;
}
int min(int a[90],int n)
{
    int min=a[0];
    for(int i=0;i<=n;i++)
    {
        if(a[i]<n)
        {
            min=a[i];

        }

    }
    return min;
}