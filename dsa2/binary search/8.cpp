//find the number of one

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstOne(vector<int>& row, int m) {
        int low = 0, high = m - 1;
        int ans = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (row[mid] == 1) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        int maxOnes = 0;
        int rowIndex = -1;

        for (int i = 0; i < n; i++) {
            int idx = firstOne(mat[i], m);
            int cntOnes = m - idx;

            if (cntOnes > maxOnes) {
                maxOnes = cntOnes;
                rowIndex = i;
            }
        }
        return rowIndex;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    Solution obj;
    cout << obj.rowWithMax1s(mat);
    return 0;
}
