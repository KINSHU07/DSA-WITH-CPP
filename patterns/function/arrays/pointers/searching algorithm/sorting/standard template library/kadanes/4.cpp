//majority element in the array
#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> nums){
int n = nums.size();
for(int i = 0; i <nums.size(); i++)
{
    int count=1;
    for (int j = i+1; j < n; j++)
    {
        if (nums[i] == nums[j])
        {
            count++;
        }
        
    }
    
    if (count > n/2)
    {
        return nums[i];
    }
}
return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<majority(nums);
    return 0;
}
