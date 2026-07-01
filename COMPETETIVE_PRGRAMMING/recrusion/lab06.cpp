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

class Solution {
public:
    bool solve(string &s, int start, int end) {
        if (start >= end)
            return true;

        if (s[start] != s[end])
            return false;

        return solve(s, start + 1, end - 1);
    }

    bool isPalindrome(string &s) {
        return solve(s, 0, s.size() - 1);
    }
};