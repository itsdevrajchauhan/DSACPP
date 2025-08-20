#include <iostream>
using namespace std;

// swuare Pattern

int main()
{
    /* int n = 4;
     for (int i = 1; i <= n; i++)//outer loop
     {
         for (int j = 1; j <= n; j++)//inner loop
         {
             cout << "*";
         }
         cout << endl;
     }

    // ABCD printing using the logic

    int n = 26;

    for (int i = 0; i < n; i++) // outer for number of row and column you want
    {
        char ch = 'A';
        for (int j = 0; j < 10; j++) // inner loop for what content you want to print in the code
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    */

    int num = 1;
    int n = 3;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << num;
            num++;
        };

        cout << endl;
    };

    return 0;
}