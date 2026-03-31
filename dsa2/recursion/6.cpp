//sum of subsets

#include<bits/stdc++.h>
using namespace std;

void solve(int i ,int sum , int n, vector<int> &nums , vector<int>& ans){
    if(i == n){
        ans.push_back(sum);
        return;
    }
    solve(i+1 , sum+ nums[i], n , nums , ans);
    solve(i+1 , sum, n , nums , ans);

}
vector<int> subsum(vector<int> nums , int n){
    vector<int> subset;
solve(0 , 0 , nums.size() , nums, subset);
sort(subset.begin() , subset.end());
return subset;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {2,3,4};
    vector<int> ans = subsum(arr , 3);

for(auto i : ans){
    cout<<i <<" ";
}
    return 0;
}