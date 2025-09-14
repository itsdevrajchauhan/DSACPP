#include <iostream>
using namespace std;

/*
 int n, m;
    cin >> n;
    cin >> m;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= m; j++)
            if (i == 0 || i == n or j == 0 || j == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        cout << endl;
    }

 -------------------
 int n, m;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

-----------------------------------
  int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
-------------------------------------------

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= i-1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }


------------------------------------
int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
-----------------------------------------
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
----------------------------------------
   int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
------------------------------------------
 int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i == 1 || i == n or j == 1 || j == 6)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
--------------------------------------------
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }
        cout << endl;
    }

-----------------------------------------
   int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 1; j < i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
--------------------------------------
   int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
------------------------------------------
int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    cout << count << endl;

--------------------------------------------
int n;
    cin >> n;
    int sum = 0;

    while (n > 0)
    {

        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    cout << sum << endl;
---------------------------------------------
 int n, sum = 0;
    cin >> n;
    while (n > 0)
    {

        int temp = n % 10;

        cout << temp;
        n /= 10;
    }
    cout << endl;
---------------------------------------------
 int n, sum = 0;
    cin >> n;
    while (n > 0)
    {
        int reverse = n % 10;
        sum = sum * 10 + reverse;
        n /= 10;
    }
    cout << sum << endl;

-----------------------------------------
   int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << sum << endl;



-----------------------------------------
int n;
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        cout << factorial << endl;
    }

----------------------------------------------
int a, b;
    cin >> a;
    cin >> b;
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    cout << result << endl;
---------------------------------------
int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2)
            {
                cout << "*";
            }
            else if (j == n / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        };
        cout << endl;
    };
-----------------------------------------------
-------------------------------------------
----------------------------------------------------
------------------------------------------------
--------------------------------------------
--------------------------------------------
---------------------------------------
-----------------------------------
-----------------------------------------
----------------------------------

*/

int main()
{
    int x, y;
    cout << "inter the number of row : ";
    cin >> x;
    cout << "inter the number of Column : ";
    cin >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
};
