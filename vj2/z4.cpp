#include <iostream>

using namespace std;

int* function(int n)
{
    int i = 2;
    int* a = new int[n];
    
    a[0] = 1;
    a[1] = 1;

    if (n < 2)
        return a;
    while (i < n)
    {
        a[i] = a[i - 1] + a[i - 2];
        i++;
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter number:" << endl;
    cin >> n;

    int* arr = function(n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    delete[] arr;
    arr = 0;

    return 0;
}