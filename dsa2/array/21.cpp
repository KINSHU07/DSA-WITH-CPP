//longest concecutive sequence

#include<bits/stdc++.h>
using namespace std;

    bool linear(vector<int> &nums, int key){
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == key){
                return true;
            }
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int longest = 1; 
        for(int i = 0 ; i < n ; i++){
            int x = nums[i];
            int count = 1;
            while(linear(nums, x+1)){
                x = x+1;
                count++;
            }
            longest = max(longest, count);  
        }

        return longest;
    }


    int longest(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        sort(nums.begin(), nums.end());

        int res = 1;
        int curr = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                continue; 
            } 
            else if (nums[i] - nums[i-1] == 1) {
                curr++;
            } else {
                res = max(res, curr);
                curr = 1;
            }
        }
        
        res = max(res, curr); 
        return res;
    }


    int Consecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        unordered_set<int> st;
        for(auto x : nums){
            st.insert(x);
        }

        int longest = 1;

        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int x = it;

               
                while(st.find(x + 1) != st.end()){
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }