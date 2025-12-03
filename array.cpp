
/*
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {12, 33, 4, 55, -12, 43};
    int size = 6;
    int smallest = __INT_MAX__;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest;
    return 0;
}


---------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{

    int arr[6];
    for (int i = 0; i < arr[6]; i++)
    {
        cin >> arr[i];
    }
    int size = 6;
    int smallest = __INT_MAX__;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
    }
    cout << "smallest " << smallest;
    return 0;
}
----------------------------------------------------------------------------
#finding the maximum number in array

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 33, 543, -5, 43, 11};
    int size = 6;
    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "this is largest amount : " << largest;
}
---------------------------------------------------------------------
#second way using max function for finding the Big Number in array



#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 33, 543, -5, 43, 11};
    int size = 6;
    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        largest = max(arr[i], largest);
    }
    cout << "this is largest amount : " << largest;
}
-----------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 33, 543, -5, 43, 11};
    int size = 6;
    int largest = INT8_MIN;
    int smallest = INT8_MAX;
    int a, b;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            a = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            b = i;
        }
    }
    cout << "this is largest amount : " << largest << " index is : " << b << endl;
    cout << "this is Smallest amount : " << smallest << " index is : " << a;
}
---------------------------------------------------


leanear searc

int LeanerSearch(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {

        if (arr[i] == 29)
        {
            return i;
        }
    }

    return -1;
}


int main(){

  int arr[] = {1, 23, 45, 21, 33, 22, 33, 2};
    int size = 8;
    cout << LeanerSearch(arr, size);

}

-----------------------------------------------------

reversing an array


#include <iostream>
using namespace std;

int Reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 9;
    Reverse(arr, 9);
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}



-------------------------------------------------------------------
finding minimum and mximum in arraya nd and swaping them after that
//do not change array



int findminmax(int arr[], int size)
{

    int largest = INT8_MIN;
    int smallest = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "smallest : " << smallest << endl;
    cout << "largest: " << largest << endl;

    int temp = smallest;
    smallest = largest;
    largest = temp;

    cout << "largest now : " << largest << endl;

    cout << "smallest now : " << smallest << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
};

int main()
{
    int arr[7] = {2, 32, 42, -3, 11, 64, 23};
    int size = 7;
    findminmax(arr, 7);
};


-------------------------------------------------------------------
Sum and Product of Array


#include <iostream>
using namespace std;

int SumProduct(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    cout << sum << endl;
    cout << product << endl;
}

int main()
{

    int arr[7] = {1, 2, 33, 21, 57, 23, 2};

    int size = 7;
    SumProduct(arr, size);
}




--------------------------------------------------------------------
#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "unique values : " << arr[i] << endl;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7, 8};
    int size = 12;
    unique(arr, size);
}


----------------------------------------------------------------------

#include <iostream>
using namespace std;

// intersection of arrays

int multiarrange(int arr1[], int arr2[], int n)
{
    int sum = 0;
    int count = 0; //
    for (int i = 0; i < n; i++)
    {
        int count = 0; //
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                sum = arr1[i];
                count++;
            }
        }
        if (count > 0)
        {
            cout << " " << sum;
        }
    }
}

int main()
{
    int n = 7;

    int arr1[] = {1, 2, 3, 4, 7, 5, 0};
    int arr2[] = {4, 3, 5, 6, 7, 8, 9};

    multiarrange(arr1, arr2, n);
}



-----------------------------------------------------------------------
This is Leanerserach Program using Vector

#include <iostream>
#include <vector>
using namespace std;

int Vleanersreach(vector<int> &vec, int target)
{
    for (int vect : vec)
    {
        if (vect == target)
        {
            cout << "this serach is successful: " << vect;
        }
    }
}

int main()
{
    vector<int> vec = {2, 3, 4, 5, 6, 7, 7, 9};
    int target;
    cin >> target;

    Vleanersreach(vec, target);
}

--------------------------------------------------------------


#include <iostream>
#include <vector>
using namespace std;

int main()
{

    cout << "all possible Subarray's"<<endl;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {

        for (int end = st; end < n; end++)
        {

            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}







-------------------------------------------------------------
sum of array
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int array[] = {6, 5, 8, 3, 8, 6, 2};
    int sum = 0;
    int size = sizeof(array) / array[o];
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum;
}



------------------------------------------
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maximum(int array[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int LearnerSearch(int array[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {

        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {3, 7, 18, 9, 11};

    int size = sizeof(array) / sizeof(array[0]);

    cout << maximum(array, size) << endl;
    int target;
    cout << "inter what you serach :" << endl;
    cin >> target;
    cout << "Index of serched Eliment is : " << LearnerSearch(array, size, target);
}


*/




#include <iostream>
#include <climits>
#include <vector>
using namespace std;






int main(){


}