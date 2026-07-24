//* Largest element 

/*

i/p : arr[ ] = {10,5,20,8 }
o/p : 2 // index of 20 

*/



#include <iostream>
using namespace std;



//* NAIVE APPROACH

int largestElement(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool flag = true;

        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            return arr[i];
    }

    return -1;
}

int main()
{
    int arr[] = {10, 5, 20, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << largestElement(arr, n);

    return 0;
}