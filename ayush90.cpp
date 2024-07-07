#include<iostream>
using namespace std;

int count(int num);
int main()
{
    int num, j;
    cout << "Enter the value of num: ";
    cin >> num;
    j = count(num);
    
}

int count(int num)
{
    for(int i=1;i<=10;i++)
    {
        cout<<num*i<<endl;
    }
}
