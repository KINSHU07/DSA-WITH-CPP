//pair sum problem
//most optimal approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

   int i = 0, j = n-1;
   while (i < j){
    int pairsum = nums[i] + nums[j];
    if (pairsum > target)
    {
        j--;
    }else if (pairsum <target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
    
   }
   
    return ans; // return empty vector if no pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = pairSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
