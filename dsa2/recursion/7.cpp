//subsets when duplicates are there
#include<bits/stdc++.h>
using namespace std;

    void solve(int index, vector<int>& nums, vector<int>& curr, set<vector<int>>& st) {
        if (index == nums.size()) {
            st.insert(curr);
            return;
        }

       
        curr.push_back(nums[index]);
        solve(index + 1, nums, curr, st);

      
        curr.pop_back();
        solve(index + 1, nums, curr, st);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        set<vector<int>> st;
        vector<int> curr;

        solve(0, nums, curr, st);

        return vector<vector<int>>(st.begin(), st.end());
    }

int main(int argc, char const *argv[])
{
    vector<int> arr = {2,3,3};
    vector<vector<int>> ans = subsetsWithDup(arr);

for(auto it : ans){
    cout<<" {";
    for(auto i: it){
        cout<<i <<" ";
    }
    cout<<" }"<<endl;
}
    return 0;
}
