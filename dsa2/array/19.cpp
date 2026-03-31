//rearrange array with sign
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> a){
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] > 0){
            pos.push_back(a[i]);
        } else{
            neg.push_back(a[i]);
        }
    }

    for (int i = 0; i < a.size()/2; i++)
    {
        a[2*i] = pos[i];
        a[(2*i)+1] = neg[i];
    }
    return a;
    
}
vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int posidx = 0 , negidx = 1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > 0){
                ans[posidx] = nums[i];
                posidx +=2;
            } else{
                ans[negidx] = nums[i];
                negidx +=2;
            }
        }
        return ans;
    }

int main(int argc, char const *argv[])
{
    vector<int> ae = {1,2,3,-1,-2,-3,-4,5};
    vector<int> d = rearrange(ae);
    for(auto it: d){
        cout<<it<<" ";
    }
    return 0;
}
