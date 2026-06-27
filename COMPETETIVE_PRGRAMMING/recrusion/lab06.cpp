#include<iostream>
#include <string>
using namespace std;

bool ispalindrome(const string &str, int start, int end){

    if(start>=end ){
return true;

    }
    return (str[start]== str[end]) && ispalindrome(str, start+1, end-1);

}

int main(){

    
}