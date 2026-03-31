//find last and first occurence on the number
//find the occurences also

#include<bits/stdc++.h>
using namespace std;


int lowerbound(vector<int>& nums, int target){
    int n = nums.size();
    int high = n-1;
    int low = 0 ;
    while(low <=high){
        int mid = low + (high - low)/2;

        if(nums[mid] >= target){
           n = mid;
           high = mid-1;
        } else{
            low = mid+1;
        }

    }
    return n ;

}
int upperbound(vector<int>& nums, int target){
    int n = nums.size();
    int high = n-1;
    int low = 0 ;
    while(low <=high){
        int mid = low + (high - low)/2;

        if(nums[mid] > target){
           n = mid;
           high = mid-1;
        } else{
            low = mid+1;
        }

    }
    return n ;

}
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;

    int a = lowerbound(nums, target);
    if(a == nums.size() || nums[a] != target){
        return {-1, -1};
    }
    int b = upperbound(nums, target) -1;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
    }

int coun(vector<int>& nums, int target){
    int a = lowerbound(nums, target);
    int b = upperbound(nums, target);
    return b-a;

}

int main(int argc, char const *argv[])
{
    vector<int> v = { 1,2,3,4,5,5,5,5,8};
    vector<int> c = searchRange(v, 5);
    for(auto it : c){
        cout<<it<<" ";
    }
    cout<<endl;
cout<<coun(v,5)<<" ";
    return 0;
}
