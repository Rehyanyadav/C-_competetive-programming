#include<iostream>
using namespace std;


//* reverse an array
void  reverse(int arr[], int n){

    int  low = 0; 
    int high = n-1;

    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;

    }
}
int main(){


int n ;
    cout <<"enter size ";
cin>>n;
int arr[n];
for(int i = 0; i<n; i++){   
    cin>>arr[i];

}

    cout<<"array before reverse"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    reverse(arr,n);
    
    cout<<"array after reverse"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";  
    }

    

return 0;
}