#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int target){
    int st = 0, end = arr.size() - 1;
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == target)  // ✅ Fixed: compare mid, not st
            return mid;

        // left half is sorted
        if(arr[st] <= arr[mid]){
            if (arr[st] <= target && target <= arr[mid]){
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } 
        // right half is sorted
        else {
            if (arr[mid] <= target && target <= arr[end]){  
                st = mid + 1;
            } else {
                end = mid - 1;  // ✅ Added missing semicolon
            }
        }
    }
    return -1;
}

int main() {
    vector<int> a1 = {6,7,8,9,0,1,2,3,4,5};
    int tr1 = 8;

    int result = search(a1, tr1);
    cout << result << endl;

    return 0;
}
