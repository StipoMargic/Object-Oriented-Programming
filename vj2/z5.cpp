#include <iostream>
#include <stdlib.h>

using namespace std;

int print(int **array, int n)
{
    int numb = 0;
    int input;
    
    while (1)
    {
        cin >> input;

        if (input == 0)
            return numb;

        if (numb == n)
        {
            n *= 2;
            *array = (int *)realloc(*array, sizeof(int) * n);
        }
        (*niz)[numb] = input;
        numb++;
    }
}

int main()
{
    int *arr = (int *)malloc(sizeof(int) * 10);
    int n = print(&arr, 10);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    free(arr);

    return 0;
}
