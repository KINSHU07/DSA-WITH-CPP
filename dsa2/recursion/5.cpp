//subset sum 

#include<bits/stdc++.h>
using namespace std;

void solve(int i , vector<int>& nums , vector<int>& curr , vector<vector<int>>& ans){
if(i == nums.size()){
    ans.push_back(curr);
    return;
}
curr.push_back(nums[i]);
solve(i+1 , nums , curr, ans);
curr.pop_back();
solve(i+1 , nums , curr, ans);

}

vector<vector<int>> subsets(vector<int>& nums){
vector<vector<int>> ans;
vector<int> curr;
solve(0 , nums , curr, ans);
return ans;

}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2,3,4};
    vector<vector<int>> ans = subsets(arr);

for(auto it : ans){
    cout<<" {";
    for(auto i: it){
        cout<<i <<" ";
    }
    cout<<" }"<<endl;
}
    return 0;
}
