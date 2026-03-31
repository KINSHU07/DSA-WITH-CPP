//median of row sorted matrix

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMedian(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = INT_MAX, high = INT_MIN;

        // find min and max element
        for (int i = 0; i < n; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][m - 1]);
        }

        int req = (n * m) / 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;

            // count elements <= mid
            for (int i = 0; i < n; i++) {
                cnt += upper_bound(matrix[i].begin(),
                                   matrix[i].end(),
                                   mid) - matrix[i].begin();
            }

            if (cnt <= req) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    cout << obj.findMedian(matrix);

    return 0;
}
