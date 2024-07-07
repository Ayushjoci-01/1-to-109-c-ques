#include<iostream>
using namespace std;
int linear(int a[],int n,int key);
int main()
{
    int a[90],n,key;
    cout<<"enter the elements range"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element you want"<<endl;
    cin>>key;
    int result=linear(a,n,key);
    if(result)
    {
        cout<<"elements are found";
    }
    else 
    {
        cout<<"elements are not found";
    }

}
int linear(int a[90],int n,int key)
{
    for(int i=0;i<n;i++)
    if(a[i]==key)
    {
        return 1;
    }
    return 0;
}