//lower bound

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    // int low = 0;
    // int high = arr.size() - 1;
    // int ans = arr.size();   // default if no lower bound exists

    // while (low <= high) {
    //     int mid = low + (high - low) / 2;

    //     if (arr[mid] >= target) {
    //         ans = mid;          // possible answer
    //         high = mid - 1;     // search left
    //     } else {
    //         low = mid + 1;      // search right
    //     }
    // }
    // return ans;
    int n = arr.size()-1;
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        

    }
    return ans;

}
int upperBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 6;

    int index = lowerBound(arr, target);

    if (index == arr.size())
        cout << "Lower Bound not found";
    else
        cout << "Lower Bound index: " << index << "\nValue: " << arr[index];

    return 0;
}
