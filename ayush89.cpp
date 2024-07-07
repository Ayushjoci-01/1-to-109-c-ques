#include<iostream>
using namespace std;
int nCr(int n,int r);
int fact(int n);
int main()
{
    int n,r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    int result=nCr(n,r);

    cout<<result<<endl;
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    return fact;

}

int nCr(int n,int r)
{
    int num=fact(n);
    int dem=(fact(r)*fact(n-r));
    int ans=num/dem;
    return ans;

}

