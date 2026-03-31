//medium 1
//two sum problem

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if(i == j) continue;
            if(nums[i] + nums[j] == target){
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                
            }
        }
        
    }
    return result;
    
}
vector<int> two(vector<int>& nums, int target) {
   map<int , int> mpp;
   for (int i = 0; i < nums.size(); i++)
   {
    int a = nums[i];
    int b = target - a;
    if (mpp.find(b) != mpp.end())
    {
       return {mpp[b], i }; 
    }
    mpp[a] = i;
    
   }
   return {-1,-1};
}


vector<int> Sum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right}; 
        }
        else if (sum < target) {
            left++;  
        }
        else {
            right--; 
        }
    }
    return {-1, -1}; 
}
int main(int argc, char const *argv[])
{
    vector<int> a = {1,3,5,7,9,2,4,6,8,10};
    vector<int> res = twoSum(a,19);
    for(auto is : res){
        cout<<is<<" ";
    }
    cout<<endl;
    vector<int> d = two(a, 7);
    for(auto is : d){
        cout<<is<<" ";
    }
    vector<int> e = Sum(a, 18);
    for(auto is : e){
        cout<<is<<" ";
    }


    return 0;
}
