
//* buy sell stock problem leetcode 121


#include<iostream>
#include<math.h>


using namespace std;
class Solution{
public:
int buysellStock(vector<int> prices){
    int mini = prices[0];
    int maxprofit =  0;


    for(int i =1; i<prices.size(); i++){
        int cost = prices[i] - mini;
         maxprofit = max(maxprofit , cost);
        mini = min(mini , prices[i]);

    }

  return maxprofit;

}



};



int main(){

//* write test cases here
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.buysellStock(prices)<<endl;


}