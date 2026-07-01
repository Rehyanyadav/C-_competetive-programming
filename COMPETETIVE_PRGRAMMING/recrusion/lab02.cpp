#include<iostream>
using namespace std;


int print1toN(int n){
//base case 
if(n==0){
return 0;
}
print1toN(n-1);
cout<<n<<" ";

return;

}
int main(){

    int n = 4;
    print1toN(n);
return 0;

}