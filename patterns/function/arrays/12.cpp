//majority element 

#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> nums){
    int n = nums.size();
    int freq= 1, ans = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i-1])
        {
            freq++;
        }else{
            freq =1;
            ans = nums[i];
        }
    }
}
int factorial(int n){
    int product =1;
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

int main(int argc, char const *argv[])
{  
    
    vector<int> nums={1,1,1,1,2,3,1};
    int result = majority(nums);

cout<<result;
    return 0;
}

