#include <iostream>
using namespace std;

void function(int arr[], int& min, int& max, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if ( min > arr[i] )
            min = arr[i];
        else if ( max < arr[i] )
            max = arr[i];
    }
}

int main()
{
    int arr[10] = { 15, 22, 31, 14, 55555, 59, 34, 58, 11, 22 };
    int s = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    
    function( arr, min, max, s );

    cout << "Min number is: " << min << endl;
    cout << "Max number is: " << max << endl;

    return 0;
}