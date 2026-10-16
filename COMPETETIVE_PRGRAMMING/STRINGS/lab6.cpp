#include<iostream>
using namespace std;


class Solution {

public: 
     bool isIsomorphic( string s , string t){
            
                  //* two tracking arrays for ASCII characters ( size 256)
                  vector<int> mapS(256,0);
                  vector<int> mapT(256,0);
            
                  for(int i =0; i<s.length(); i++){
                  char c1 = s[i];
                  char c2 = t[i];

                  //* if mapping exists ,check if they are matching our curent char or not 
                  if((mapS[c1] != 0 && mapS[c1] != c2)) return false;
                  if((mapT[c2] != 0 && mapT[c2] != c1)) return false;
                   


                  //* establishing the bidirectional mapping
                  mapS[c1] = c2;
                  mapT[c2] = c1;
                  }
                  return true;
                }
};

int main(){


    //* test case 1
    
    string s1 = "f11";
    string t1 = "f12";
    Solution sol;
    if(sol.isIsomorphic(s1,t1)){
        cout<<"The strings are isomorphic"<<endl;
    }else{
        cout<<"The strings are not isomorphic"<<endl;
    }

    string s2 = "egg";
    string t2 = "add";
    if(sol.isIsomorphic(s2,t2)){

        cout<<"The strings are isomorphic"<<endl;

    }else{  
        cout<<"The strings are not isomorphic"<<endl;
    }   


    return 0;


}