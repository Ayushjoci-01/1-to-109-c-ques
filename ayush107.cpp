#include<iostream>
using namespace std;
int binaryArray(int a[],int n ,int key);
int main()
{
    int a[90],n,key;
    cout<<"enter the range"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter the index to find"<<endl;
    cin>>key;
    int index=binaryArray(a,n,key);
    cout<<"so the index is "<<index<<endl;
    return 0;
}
int binaryArray(int a[],int n,int key)
{
    int start,end,mid;
    start=0;
    end=n-1;
    mid=(start+end)/2;
    while(start<=end)
    {
        if(a[mid]==key)
        {
            return mid;

        }
        if(key>mid+1)
        {
            start=start+1;

        }
        else{
            end=end-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}