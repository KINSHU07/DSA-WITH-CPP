#include<bits/stdc++.h>
using namespace std;

void summ(int i, int n, vector<int> &ans, int arr[], int target, int sum) {
    // base case
    if (i == n) {
        if (sum == target) {
            for (auto it : ans) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // take
    ans.push_back(arr[i]);
    sum += arr[i];
    summ(i + 1, n, ans, arr, target, sum);

    // not take
    sum -= arr[i];
    ans.pop_back();
    summ(i + 1, n, ans, arr, target, sum);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int target = 2;

    vector<int> ans;
    summ(0, n, ans, arr, target, 0);

    return 0;
}
