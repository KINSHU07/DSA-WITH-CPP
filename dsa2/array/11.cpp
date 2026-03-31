//maximum concecutive ones

#include<iostream>
#include<vector>

using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 , maxi = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi, count);
            } else if(nums[i] == 0){
                count = 0;
            
            }
        }
        return maxi;
    }

int main(int argc, char const *argv[])
{
    vector<int> m ={1,1,1,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1,1,1,1,0,1,1,1,1,0};
    cout<<findMaxConsecutiveOnes(m);

    return 0;
}
