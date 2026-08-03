//* array is sorted or not 

#include<iostream>
using namespace std;


//* NAIVE SOLUTION
bool issorted(int arr [], int n ){
    for(int i = 0; i<n; i++){
        for(int j  = i+1; j<n; j++){
if(arr[j]<arr[i]){
    return false;
}
        }
    }
    return true;


}

int main(){


int n ;
    cout <<"enter size ";
cin>>n;
int arr[n];
for(int i = 0; i<n; i++){   
    cin>>arr[i];
}
issorted(arr,n)?cout<<"sorted":cout<<"not sorted";



}