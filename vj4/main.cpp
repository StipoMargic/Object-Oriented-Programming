#include "Headers.h"


int main()
{
    int n;
    while (true)
    {
        cout << "Number of players? 2 or 4 " << endl;
        cin >> n;
        if (n != 2 && n != 4)
        {
            cout << "Wrong number!" << endl;
        }
        else
        {
            result(n);
            break;
        }
    }

    return 0;
}