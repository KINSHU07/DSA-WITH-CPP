//pair sum problem

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,34,5,6,5};
    int n = nums.size();
    vector<int> ans;
    int target = 6;

    for(int i = 0 ; i < n; i++){
        for (int j= i+1; j < n ; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
            
        }
        
    }
    for(auto val : ans){
        cout<<val<<" ";
    }
    return 0;
}
