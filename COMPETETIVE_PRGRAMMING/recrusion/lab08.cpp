#include<iostream>
#include<math.h>
using namespace std;

int maxpieces (int n , int a , int b  , int c ){

    if (n ==0){
        return 0;
        
    }
    if (n < 0){

        return -1;

    }

int result = std::max(maxpieces(n-a, a,b,c), std::max(maxpieces(n-b, a,b,c), maxpieces(n-c, a,b,c)));

    if(result == -1){
        return -1;
    }

    return result + 1;

}

int main(){


    int n = 9;
    int a = 2;
    int b = 2;
    int c = 2;

cout << maxpieces(n, a,b,c );

    return 0;
}