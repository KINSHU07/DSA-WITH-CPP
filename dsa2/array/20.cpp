//leaders
#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> ans;
      for (int i = 0; i < nums.size(); i++)
      {
            bool leader = true;
            for (int j= i+1; j < nums.size(); j++)
            {
                 if(nums[j] > nums[i]){
                    leader = false;
                    break;
                 }
            }
            if(leader){
                ans.push_back(nums[i]);
            }
      }
      return ans;
      
}

 vector<int> leaderss(vector<int>& nums) {
      int maxi = INT_MIN;
      vector<int> ans;
      for(int i = nums.size()-1 ; i >=0 ; i--){
        if(nums[i] > maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi, nums[i]);
      }
      return ans;
    }
int main(int argc, char const *argv[])
{
    vector<int> a = {2,1,5,4,3,2,1,10};
    vector<int> c = leaders(a);
    for(auto it: c){
        cout<<it<<" ";
    }
    vector<int> d = leaderss(a);
    for(auto it: d){
        cout<<it<<" ";
    }
    return 0;
}
