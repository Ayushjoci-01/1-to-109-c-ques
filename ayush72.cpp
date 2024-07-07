#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the value of n" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        int count = n - i; 
        while (count)
        {
            cout << " ";
            count = count - 1; 
        }
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
