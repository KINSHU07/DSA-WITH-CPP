#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr, vector<int>& ans, int i) {
    if (i == arr.size()) {
        for (int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    print(arr, ans, i + 1);

    // backtrack (remove last element)
    ans.pop_back();

    // exclude
    print(arr, ans, i + 1);
}

int main() {
    vector<int> ac = {1, 3, 2, 4, 3, 4};
    vector<int> ans;
    print(ac, ans, 0);
    return 0;
}
