//* Largest element 

/*

i/p : arr[ ] = {10,5,20,8 }
o/p : 2 // index of 20 

*/



#include <iostream>
using namespace std;



//* NAIVE APPROACH

// int largestElement(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         bool flag = true;

//         for(int j = 0; j < n; j++)
//         {
//             if(arr[j] > arr[i])
//             {
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag)
//             return arr[i];
//     }

//     return -1;
// }



int largest_element(int arr[ ] , int n){


// *NAIVE APPROACH
   for(int i = 0; i < n; i++)

    for(int i =0 ; i <n ; i++){
// * using flag to check if the current element is the largest
        bool flag = true;
        //*  checking if there is any element greater than the current element

            for(int j = 0 ; j<n; j++){
                    //*  if the current element is less than any other element, set flag to false and break the loop
                if(arr[j] > arr[i]){
                    flag = false;
break;

                }
                
            }

            //* if flag is true, return the current element as the largest

            if( flag)
            return arr[i];

    }
    // * if no largest element is found, return -1
    return -1;
    
}




//* OPTIMIZED APPROACH

int get_largest(int arr[ ], int n ){
    int result = 0;
    for(int i =1; i<n; i++)
        if(arr[i]>arr[result])
            result = i;
            return result;

}


int main()
{
    int arr[] = {10, 5, 20, 8};

    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function and print the result

    cout << largest_element(arr, n)<<endl;

    cout<<get_largest(arr,n);

    return 0;
}