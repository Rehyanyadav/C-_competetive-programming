#include<iostream>
using namespace std;


class Solution {
  public:
    int cntSpecialNum(vector<int>& arr) {

        unordered_map<int, int> freq;

        for(int x : arr)
            freq[x]++;

        int count = 0;

        for(int x : arr) {

            bool special = false;

            // Duplicate case
            if(freq[x] > 1) {
                count++;
                continue;
            }

            for(int d = 1; d * d <= x; d++) {

                if(x % d == 0) {

                    int d1 = d;
                    int d2 = x / d;

                    if(d1 != x && freq.count(d1)) {
                        special = true;
                        break;
                    }

                    if(d2 != x && freq.count(d2)) {
                        special = true;
                        break;
                    }
                }
            }

            if(special)
                count++;
        }

        return count;
    }
};