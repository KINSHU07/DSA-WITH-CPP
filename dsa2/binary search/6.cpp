//aggressive cow

#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int> &stalls, int cows, int dist) {
    int cntCows = 1;              // place first cow
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= dist) {
            cntCows++;
            lastPos = stalls[i];
        }
        if (cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlace(stalls, cows, mid)) {
            ans = mid;        // possible, try bigger distance
            low = mid + 1;
        } else {
            high = mid - 1;   // not possible, reduce distance
        }
    }
    return ans;
}

int main() {
    int n, cows;
    cin >> n >> cows;

    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    cout << aggressiveCows(stalls, cows);
    return 0;
}
