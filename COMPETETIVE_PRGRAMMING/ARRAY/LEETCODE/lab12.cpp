//* leetcode 2149 rearrange array elements by sign


#include<iostream>
using namespace std;


class Solutions{
    public:
 vector<int>  rearrangearray (vector<int> nums){


    int n = nums.size();
vector<int> ans (n, 0);
int PostIndex = 0;
int NegIndex = 1;

for(int i =0; i<n; i++){
    if(nums[i]>0){
     ans[PostIndex] = nums[i];
     PostIndex +=2;

    }
    else{
ans[NegIndex] = nums[i];
NegIndex += 2;

    }
}

return ans;

 }
};

int main(){


//* predefiend test cases
    Solutions s;
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> ans = s.rearrangearray(nums);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
 return 0;


}