//* Longest common prefix 
/*
//* input: ["flower","flow","flight"]
//*     output: "fl"
*/

#include<iostream>
using namespace std;



class Solution {

public: 
//* this version of code is production level code 

        string longestCommonPrefix(vector<string> & strs){
                       //* checking if the string is empty or not if yes return " "
                       if( strs.empty()) return "";
                       for (int i = 0; i < strs[0].length(); i++) {
                       char c = strs[0][i];
            
                          // *Compare this character against all other strings at the same index
                       for (int j = 1; j < strs.size(); j++) {
                         //* If index 'i' exceeds the length of string 'j', 
                        //* or if the character doesn't match, we've found our limit!
                       if (i >= strs[j].length() || strs[j][i] != c) {
                       return strs[0].substr(0, i);
                             }
                           }
                          }
        
                      //*  If the loop finishes, the entire first string is the common prefix
                      return strs[0];
                       }


//* good for coding contests
public : 
    string longestComPrefix(vector<string>& strs){
        //* sorting the arrray alphabetically 
        sort(strs.begin() , strs.end());
        //* grab first & last  strings 
        string first = strs[0];
        string last  = strs.back();

        string ans = "";
        int n = min(first.length() ,last.length());

        //* find common character between first and last string 
        for (int i = 0; i<n; i++){
            if(first[i] == last[i]){
                ans+= first[i];
            }else{
                break;
            }

        }
        return ans;

    }

};

int main (){

//* test cases for the above function */
    Solution s;
    vector<string> strs = {"flower","flow","flight"};
    cout << "Longest common prefix is: " << s.longestCommonPrefix(strs) << endl;
    cout << "Longest common prefix is: " << s.longestComPrefix(strs) << endl;
}