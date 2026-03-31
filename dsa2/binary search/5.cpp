//koko eating banana

#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>& v) {
    int maxi = INT_MIN;
    for (int i = 0; i < v.size(); i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int>& v, int hourly) {
    int totalH = 0;
    for (int i = 0; i < v.size(); i++) {
        totalH += ceil((double)v[i] / (double)hourly);
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int>& v, int h) {
    int low = 1, high = findMax(v);

    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(v, mid);

        if (totalH <= h) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    vector<int> v = {3, 6, 7, 11};
    int h = 8;

    cout << minimumRateToEatBananas(v, h);
    return 0;
}
