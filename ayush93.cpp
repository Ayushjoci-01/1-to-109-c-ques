#include<iostream>
using namespace std;
int sumarray(int a[],int n);
int main()
{
    int a[34],n;
    cout<<"enter the elements of the number"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=sumarray(a,n);
    cout<<"so the sum of the array is"<<j<<endl;
    return 0;
}
int sumarray(int a[34],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    
    return sum;

}