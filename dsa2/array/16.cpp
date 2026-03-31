//majority element in the array ( d > n/2)

#include<bits/stdc++.h>
using namespace std;

int majority(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int count =0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
        
    }
    return -1;
    
}
int majority_better(vector<int> a){
    int n = a.size();
    map<int, int> mpp;
    for (int i = 0; i < a.size(); i++)
    {
        mpp[a[i]]++;
    }
    for(auto it: mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}
//moores voting algo
int majorityElement(vector<int>& nums) {
    int count = 0;
    int el = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(count == 0){
            count =1;
            el = nums[i];
        } else if(nums[i] == el){
            count++;
        } else{
            count--;
        }
    }
    return el;
    

}

int main(int argc, char const *argv[])
{
    vector<int> a = {1,2,3,1,2,3,1,1,2,21,1,11,1,1,22,2,2,2,2,2,2,2,2,2,2,22,2,2};
    cout<<majority(a);
    cout<<majority_better(a);
    cout<<majorityElement(a);
    return 0;
}
