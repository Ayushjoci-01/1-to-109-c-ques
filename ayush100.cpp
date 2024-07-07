#include<iostream>
using namespace std;
int sum(int a[],int n);
int sumOfDigits(int n);
int main()
{
    int n,a[90],result,r2;
    cout<<"enter the number range"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    result=sum(a,n);  
    r2=sumOfDigits(n);
    cout<<"so the sum of the digit is "<<r2<<endl;
    int result1=sumOfDigits(n);
    if(result%2==0)
    {
        cout<<"so the num is even"<<endl;
    }
    else if (result%2!=0)
    {
        cout<<"so the num is odd"<<endl;
    }
    cout<<"so the sum of the num is"<<result<<endl;


    return 0;
    
}
int sum(int a[90],int n)
{
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+a[i];

    }
    return totalsum;
}
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        int remainder = n % 10; 
        sum += remainder;
        n /= 10;
    }
    return sum;
}