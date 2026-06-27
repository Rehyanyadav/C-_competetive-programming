#include<iostream>

using namespace std;

// naive approach 

int gcd(int a ,  int b){
    int res = min(a,b);
    while(res>0){
        if(a % res == 0 && b% res ==0){
            break;

        }
        return res;

    }
}

// euclidean alogrithm

int gcd_best(int a , int b){
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
        return a ;

    }

}
int main(){


    cout<<gcd(4,6);
    cout<<endl; 
cout<<gcd_best(9,3);

    return 0;
}