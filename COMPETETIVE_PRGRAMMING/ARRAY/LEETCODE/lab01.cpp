#include<iostream>
using namespace std;

//* check if array is sorted or rotated  leetcode : 1752

class Solution{
public:

bool check(vector<int>nums){
     int n = nums.size();
     int drop = 0;
     for(int i =0; i<n; i++){
        if(nums[i]> nums[(i+1)%n]){
            drop++;

        }
     }
    //  if(drop>1){
    //     return false;

    //  }
    //  else{
    //     return true ;

    //  }
    return drop <= 1;

}

};

int main(){


//* write test cases 
    vector<int>nums1 = {3, 4, 5, 1, 2};
    vector<int>nums2 = {2, 1, 3, 4};
    vector<int>nums3 = {1, 2, 3};

    Solution obj;
    cout << obj.check(nums1) << endl; // Expected: true
    cout << obj.check(nums2) << endl; // Expected: false
    cout << obj.check(nums3) << endl; // Expected: true 
    
}
