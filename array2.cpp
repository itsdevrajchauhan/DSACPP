#include <iostream>
#include <vector>
using namespace std;

/*
-----------------------------------------------------
  int marks[] = {2, 3, 5, 6, 8, -3, 4, 5, 2};
    int size = 9;
    int smallest = INT8_MAX;
    for (int i = 0; i < size; i++)
    {

        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
    }

    cout<<"smallest " <<smallest<<endl;


-----------------------------------------------------------------------------------

-  int array[7]={3,66,343,43,-6,32,22};
   int largest=INT8_MIN;
   int size=sizeof(array)/sizeof(int);
   int a;

   for(int i=0;i<size;i++){

       if(array[i]>largest){
        largest=array[i];
        a=i;
       }
   }

   cout<<"miximum of array index  "<<a <<" and the value : "<<largest<<endl;
  ---------------------------------------------------------------------------------





    int leanierSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"found the value at index  : "<<i<<endl;

        }
    }
    return -1;

}


int main()
{

    int arr[]={2,4,5,67,8,4,3};
    int size=7;
    int target=33;

   cout<< leanierSearch(arr,size,target);
    return 0;
}

-------------------------------------------------------------------
#include <iostream>
using namespace std;

void reverseArray(int arr[],int size){

            int start=0; int end=size-1;

            while (start<end)
            {


                swap(arr[start],arr[end]);
                start++;
                end--;
            }
      ;
}

int main()
{

    int arr[] = {4, 3, 7, 8, 1, 2, 5};

    int size = sizeof(arr) / sizeof(int);

    reverseArray( arr, size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;

    }
    cout<<endl;

    return 0;
}
--------------------------------------------------------------------------
#include<iostream>
using namespace std;

void ProductSum(int arr[], int size, int &sum) {  // Pass sum by reference
    for(int i = 0; i < size; i++){
        sum += arr[i];    // Add values one by one
    }
}

int main() {
    int arr[] = {23, 43, 64, 232, 76, 4, 2};
    int size = sizeof(arr) / sizeof(int);

    int sum = 0;

    ProductSum(arr, size, sum);

    cout << "Sum = " << sum;

    return 0;
}
----------------------------------------------------------------------------
#include<iostream>
using namespace std;


int main(){


    int arr[]={2,44,3,3,1,33,5};
    int size=7;

    int larget =INT8_MIN;
    int samallest =INT8_MAX;


    for(int i=0;i<size;i++){

        samallest=min(samallest,arr[i]);
        larget=max(larget,arr[i]);


    }
      swap(larget,samallest);
    cout<<"smallest number on reverse : "<<samallest<<endl;
    cout<<"largest on reverse "<<larget<<endl;

     return 0;
}
---------------------------------------------------------------
#include <iostream>
using namespace std;

void printUnique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (i ==j)
            {
                cout << i;
            }
        };
    };
}

int main()
{

    int arr[] = {1, 2, 3, 4, 2, 3, 4, 7};
    int size = 8;

    printUnique(arr, size);
}


    --------------------------------------------------------------------------
#include<iostream>
using namespace std;

int ArrayTwoSUm(int arr[],int target,int size){
        for(int i=0;i<size;i++){
            for(int j=0+1;j<size;j++){
                if(arr[i]+arr[j]==target){
                    cout<<i<<j;
                }
            }
            return 0;

        }

}

int main(){

    int arr[]={2,3,5,3,5,3,3,88,11,3};
    int target=16;
    int size=10;
   cout<< ArrayTwoSUm(arr,target,size);

     return 0;
}
----------------------------



#include<iostream>
using namespace std;



int main(){


    int arr[]={12,33,4,55,-12,43};

    int small=arr[0];

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

              if(small>arr[i]){

                small=arr[i];

              }



    }
    cout<<"smallest : " <<small<<endl;




     return 0;
}



---------------------------------------
#include <iostream>
using namespace std;
int main()
{

    int n;

    cout << "enter the size of array : " << endl;

    cin >> n;
    int arr[n];



    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];


    }



    int m = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        m = min(arr[i], m);
    }

    cout << "smallest " << m;

    return 0;
}
---------------------------------------------------------------------------------
 int n[] = {2, 33, 534, -5, 11};
    int size = sizeof(n) / sizeof(0);

    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        if (largest <n[i])
        {
            largest = n[i];
        }
    }
    cout << largest;

    ---------------------------------------------------------


#include <iostream>
using namespace std;
int main()
{

    int n[] = {2, 33, 534, -5, 11};
    int size = sizeof(n) / sizeof(0);

    int largest = n[0];

    for (int i = 0; i < size; i++)
    {

        if (largest < n[i])
        {
            largest = n[i];
        }
    }
    cout<<largest;

    return 0;
}

-----------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{

    int n[] = {2, 33, 534, -5, 11};
    int size = sizeof(n) / sizeof(0);

    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {

        largest = max(largest, n[i]);
    }
    cout << largest;

    return 0;
}

-----------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{

    int arr[]={2,33,543,-5,43,11};
    int size=sizeof(arr)/sizeof(0);

    int largest=INT8_MIN;
    int Smallest=INT8_MAX;
    int index=0;
    int inex=0;

    for (int i = 0; i < size; i++)
    {
        if(largest<arr[i]){
            largest=arr[i];
            index =i;

        }


    }
     for (int i = 0; i < size; i++)
    {
        if(Smallest>arr[i]){
           Smallest=arr[i];

            inex=i;

        }

    }

     cout<<"largest " <<largest<<" index: " <<index<<endl;
     cout<<"smalles " <<Smallest<<" index"<<inex<<endl;




    return 0;
}

-----------------------------------------------------------
include <iostream>
using namespace std;

int Searhcing(int arr[], int size, int target)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == target)
        {
            cout << "int target at index4 : " << i + 1 << endl;
        }
    }
};
int main()
{

    int arr[] = {1, 22, 32, 4, 44, 2, 12, 76, 001};

    int size = sizeof(arr) / sizeof(0);
    int target;
    cout << "what will be target : ";
    cin >> target;
    Searhcing(arr, size, target);

    return 0;
}

-------------------------------------
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 22, 32, 4, 44, 2, 12, 76, 001};

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " " << endl;
    int left = 0;
    int right = size - 1;
    for (int i = 0; i < size; i++)
    {
        while (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
---------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    int start = 0;
    int end = size - 1;
    cout<<endl;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}

----------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int larget = INT8_MIN;
    int smallest = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        larget = max(larget, arr[i]);
        smallest = min(smallest, arr[i]);
    }

    cout << "largest " << larget << endl;
    cout << "smallest " << smallest << endl;
    cout << "after Swapping : " << endl;
int temp=larget;
larget=smallest;
smallest=temp;
   cout << "largest " << larget << endl;
    cout << "smallest " << smallest << endl;
    cout << "after Swapping : " << endl;
    return 0;



}

---------------------------------------------------------------------------

    #include<iostream>
    using namespace std;


    int main(){

        int arr[]={1,2,3,4};
        int sum=0;
        int product=1;
        int size=sizeof(arr)/sizeof(arr[0]);

        for(int i=0;i<size;i++){

            sum=sum+arr[i];
            product*=arr[i];



        }

        cout<<"sum of array : " <<sum<<endl;
        cout<<"product of array : " <<product;
         return 0;
    }

    ---------------------------------------------------------
    -----------

       #include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements: ";

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
----------------------------------------------------

 #include<iostream>
 using namespace std;
 int main(){


    int arr1[]={1,2,3,1,4,7};
    int arr2[]={3,4,5,6,7,1,1,3};

    cout<<"comman Elements :";
    for(int i=0;i<6;i++){
        for(int j=0;j<8;j++){

            if(arr1[i]==arr2[j]){
                cout<<arr1[i];
                break;
            }
        }
    }


     return 0;
 }
--------------------------------------------------------------

    #include<iostream>
    using namespace std;


    int main(){
        vector<int>v={2,3,4,5,6};
       int target=4;
int index=1;
        for( int vec : v){
            if(target==vec){
                cout<<"elemt found : "<<vec<<" "<<index;
            }
index++;

        }
         return 0;
    }

----------------------------------------------------------------
    */

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    return 0;
}
