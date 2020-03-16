#include <iostream>

using namespace std;

int& function(int arr[], int i)
{
    return arr[i+1];
}

int main()
{
    int i;
    int arr[10] = { 15, 22, 31, 14, 55555, 59, 34, 58, 11, 22 };
    cout << "Enter number [0-10]: " << endl;
    cin >> i;
    int numb = function(arr, i);
    //cout<<n[indeks];
    cout << "Your number is on index " << i << " and number after is " << numb << endl;

    return 0;
}