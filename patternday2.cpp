#include <iostream>
using namespace std;

int main()
{

    /*

    int n = 3;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }


    */

    int n = 10;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}

/* This will print this
A B C
D E F
G E H
*/