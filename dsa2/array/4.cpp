//rotatete array by one
#include<bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0];
        for(int i = 1; i< nums.size(); i++){
            nums[i-1] = nums[i];
        }
        nums[n-1] = temp;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,45,6,7,5};
    rotateArrayByOne(arr); 

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
