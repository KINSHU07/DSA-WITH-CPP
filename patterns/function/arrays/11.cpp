//majority element 
//brute force approach
#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> nums){
    int n = nums.size();
    for(int val: nums){
        int freq = 0;
        for(int el : nums){
            if (el == val)
            {
                freq++;
            }
            
        }
        if(freq > n/2){
            return val;
        }
    }
return -1;
}

int main(int argc, char const *argv[])
{
    
    vector<int> nums={3,3,2};
    int result = majority(nums);
cout<<result;
    return 0;
}

