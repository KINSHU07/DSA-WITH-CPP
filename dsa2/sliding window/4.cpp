//longest subarray sum <= k
//better approach''

#include<bits/stdc++.h>
using namespace std;

int longestSubarrayLEK(vector<int>& arr, int k) {
    int n = arr.size();
    int l = 0, sum = 0, maxLen = 0;

    for(int r = 0; r < n; r++) {
        sum += arr[r];

        while(sum > k && l <= r) {
            sum -= arr[l];
            l++;
        }

        if(sum <= k) {
            maxLen = max(maxLen, r - l + 1);
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 1, 0, 1, 1, 0};
    int k = 4;
    cout << longestSubarrayLEK(arr, k);
}
