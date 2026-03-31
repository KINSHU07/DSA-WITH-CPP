//median of two sorted array

#include <bits/stdc++.h>
using namespace std;

    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size(), n2 = b.size();
        int n = n1 + n2;

        int i = 0, j = 0, cnt = 0;
        int idx1 = n / 2;
        int idx2 = n / 2 - 1;

        int val1 = -1, val2 = -1;

        while (i < n1 && j < n2) {
            if (a[i] < b[j]) {
                if (cnt == idx1) val1 = a[i];
                if (cnt == idx2) val2 = a[i];
                i++;
            } else {
                if (cnt == idx1) val1 = b[j];
                if (cnt == idx2) val2 = b[j];
                j++;
            }
            cnt++;
        }

        while (i < n1) {
            if (cnt == idx1) val1 = a[i];
            if (cnt == idx2) val2 = a[i];
            i++; cnt++;
        }

        while (j < n2) {
            if (cnt == idx1) val1 = b[j];
            if (cnt == idx2) val2 = b[j];
            j++; cnt++;
        }

        if (n % 2 == 1) return val1;
        return (val1 + val2) / 2.0;
    }



double median(vector<int>& a, vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();

    // Ensure a is the smaller array
    if (n1 > n2) return median(b, a);

    int low = 0, high = n1;
    int left = (n1 + n2 + 1) / 2;

    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;

        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;

        if (mid1 < n1) r1 = a[mid1];
        if (mid2 < n2) r2 = b[mid2];

        if (mid1 - 1 >= 0) l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = b[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) {
            if ((n1 + n2) % 2 == 1)
                return max(l1, l2);

            return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
        }
        else if (l1 > r2) {
            high = mid1 - 1;
        }
        else {
            low = mid1 + 1;
        }
    }
    return 0.0;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    cout << fixed << setprecision(5) << median(a, b);
    return 0;
}
