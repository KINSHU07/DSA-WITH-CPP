//print all subsequences

#include<bits/stdc++.h>
using namespace std;

void print_sub(int i, int d, vector<int>& ans, int arr[]) {
    if (i == d) {
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        return;   // ✅ VERY IMPORTANT
    }

    // take
    ans.push_back(arr[i]);
    print_sub(i + 1, d, ans, arr);

    // not take
    ans.pop_back();
    print_sub(i + 1, d, ans, arr);
}

int main() {
    int n = 3;
    int arr[] = {2, 4, 1};

    vector<int> ans;
    print_sub(0, n, ans, arr);

    return 0;
}
