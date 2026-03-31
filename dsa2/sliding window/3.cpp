//longest subbarray with sum <=k

#include<bits/stdc++.h>
using namespace std;
//brute
vector<vector<int>> subarraysSumLEK(vector<int>& arr, int k) {
    int n = arr.size();
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        vector<int> temp;

        for(int j = i; j < n; j++) {
            sum += arr[j];
            temp.push_back(arr[j]);

            if(sum <= k) {
                ans.push_back(temp);
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 1};
    int k = 4;

    vector<vector<int>> res = subarraysSumLEK(arr, k);

    for(auto &v : res) {
        for(int x : v) cout << x << " ";
        cout << endl;
    }
}
