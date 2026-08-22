//* Acivity selection problem
#include<iostream>
using namespace std;


class Solution {
  public:
   static bool cmp(pair<int ,int> a , pair<int , int > b){
            return a.second<b.second;
            
        }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        
      
        vector<pair<int , int> >v;
        for(int i =0; i<start.size(); i++){
            pair<int , int >p = make_pair(start[i] , finish[i]);
             v.push_back(p);
             
        }
        sort(v.begin(),v.end(),cmp);
        
        int count = 1;
        int ansEnd = v[0].second;
        for(int i =1; i<finish.size(); i++){
            if(v[i].first>ansEnd){
                count++;
                ansEnd= v[i].second;
                
            }
        }
        
        return count;
        
        
    }
};



int main(){
        
    int n;
    cout<<"Enter the number of activities: ";
    cin>>n;
    
    vector<int> start(n), finish(n);
    
    cout<<"Enter the start times: ";
    for(int i=0; i<n; i++){
        cin>>start[i];
    }
    
    cout<<"Enter the finish times: ";
    for(int i=0; i<n; i++){
        cin>>finish[i];
    }
    
    Solution sol;
    int maxActivities = sol.activitySelection(start, finish);
    
    cout<<"Maximum number of activities that can be performed: "<<maxActivities<<endl;
    
    return 0;
}

