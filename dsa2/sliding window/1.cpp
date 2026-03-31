//constant window
#include<bits/stdc++.h>
using namespace std;

int maxSumArr(vector<int> arr, int k) {
    int n = arr.size();

    int sum = 0;
    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxsum = sum;

    int l = 0;
    int r = k;

  
    while(r < n-1) {
        sum -= arr[l];   
        l++;

        r++;
        sum += arr[r];   

        maxsum = max(maxsum, sum);
    }

    return maxsum;
}

int main() {
    vector<int> arr = {-1, 2, 3, 1, 2,  -24};
    cout << maxSumArr(arr, 4);
}
