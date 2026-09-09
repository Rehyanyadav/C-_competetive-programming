//* leetcode 26 remove duplicates from sorted array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    // test cases
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    Solution s;
    cout << s.removeDuplicates(nums1) << " -> ";
    for (int x : nums1) cout << x << " ";
    cout << endl;

    cout << s.removeDuplicates(nums2) << " -> ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    return 0;
}

