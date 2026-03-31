//find permutation
#include<bits/stdc++.h>
using namespace std;

void pre(vector<int>& curr, vector<int>& nums,
         vector<vector<int>>& ans, vector<int>& freq) {

    if (curr.size() == nums.size()) {
        ans.push_back(curr);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
            curr.push_back(nums[i]);
            freq[i] = 1;

            pre(curr, nums, ans, freq);

            freq[i] = 0;
            curr.pop_back();
        }
    }
}

vector<vector<int>> permutation(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> curr;
    vector<int> freq(nums.size(), 0);

    pre(curr, nums, ans, freq);
    return ans;
}
// 2nd method

void swape(int index, vector<int> &nums, vector<vector<int>> &ans){
    if(index == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = index; i < nums.size(); i++){
        swap(nums[i], nums[index]);
        swape(index + 1, nums, ans);
        swap(nums[i], nums[index]); 
    }
}


vector<vector<int>> permutate1(vector<int> nums){
    vector<vector<int>> ans;
    swape(0 , nums , ans);
    return ans;
}
int main() {
    vector<int> arr = {2, 3, 4};
    vector<vector<int>> ans = permutation(arr);

    for (auto &it : ans) {
        cout << "{ ";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}
