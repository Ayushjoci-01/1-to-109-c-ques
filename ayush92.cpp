#include <iostream>
using namespace std;
void update(int a[], int n);
int main()
{
    
    int a[3] = {1, 3, 5};
    update(a, 3);
    cout << "Outside of the function: ";
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void update(int a[], int n)
{
    cout << "Inside the function: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
