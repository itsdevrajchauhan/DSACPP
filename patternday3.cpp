#include <iostream>
using namespace std;

/*

//Hollow rectangle * (using n, m).


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

-------------------------------------------
patter - A
 int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n / 2 || j == 0 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
----------------------------------------------------
binary to decimal conversion


 int n;
    cin >> n;
    int power = 1;

    int ans = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans += lastdigit * power;
        power *= 2;
        n /= 10;
    }

    cout << ans;
    return 0;
------------------------------------------------
Decimal to binary number

  int n;
    cin >> n;
    int power = 1;
    int ans = 0;
    while (n > 0)
    {
        int half = n % 2;
        ans += half * power;
        power *= 10;
        n = n / 2;
    }
    cout << ans << endl;
--------------------------------------------

int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
cout << minOfTwo(4, 2);
--------------------------------------------

 calculate the sum of number 1 to n

 int sumOfNumbers(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}


in main :
cout << sumOfNumbers(5);
---------------------------------------

factorial number sum

int factNumber(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact *= i;
    }
    return fact;
}

int main()
{

    cout << factNumber(4) << endl;

    cout << factNumber(5);
};
-----------------------------------

calculate sum of digits of a number

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        sum += last;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigit(n);
};
-----------------------------------------

// Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int binomialSum(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    cout << binomialSum(8, 2); // Output: 28
    return 0;
}
------------------------------------------
chicking prime number

int checkPrime(int a)
{

    for (int i = 2; i < a / 2; i++)
    {

        if (a % i == 0)
        {

            cout << a << " its not Prime Number : ";
            return 0;
        }
    }
    cout << a << " is Prime number";
    return 1;
}

int main()
{
    int n;
    cin >> n;
    checkPrime(n);
    return 0;
}
------------------------------------------
------------------------------------------
------------------------------------------
------------------------------------------
------------------------------------------
------------------------------------------
*/
int main()
{
    




}