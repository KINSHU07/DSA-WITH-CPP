//sort an array 0's, 1's and 2's
#include<bits/stdc++.h>
using namespace std;

vector<int> sortt(vector<int> arr){
    int count0 = 0, count1 =0 , count2=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < count0 + count1 + count2; i++)
    {
        arr[i] = 2;
    }
    
    return arr;
    
    
}
//dutch national flag algorithm
 void sortColors(vector<int>& nums) {
        int low = 0, mid =0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++; 
                mid++;
            } else if(nums[mid] == 1){
                mid++;
            } else{
                swap(nums[mid] , nums[high]);
                high--;

            }
        }
}
int main(int argc, char const *argv[])
{
    vector<int> a = {1,2,1,2,1,0,1,0,0,0,1,1,0,0,1};
    vector<int> result = sortt(a);
    for(auto it: result){
        cout<<it<<" ";
    }
    return 0;
}
