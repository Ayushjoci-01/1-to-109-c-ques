#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[90];
    cout<<"enter the string"<<endl;
    cin>>ch;
    int l=strlen(ch);
    strrev(ch);
    cout<<"so the len of the string is "<<l<<endl<<"reverse string is "<<ch<<endl;
    return 0;
}