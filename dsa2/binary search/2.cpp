//floor and ceil value

#include<bits/stdc++.h>
using namespace std;

pair<int, int> floorandceil(vector<int> ans , int target){
    int n = ans.size();
    int low = 0 ; 
    int high = ans.size()-1;
    int floor = -1, ceil = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(ans[mid] == target){
            floor = mid;
            ceil = mid;
            break;
        } else if(ans[mid] < target){
            floor = ans[mid];
            low = mid+1;
        } else{
                ceil = ans[mid];
                high = mid-1;

        }
    }
    return {floor, ceil};
}
int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int x = 6;

    auto ans = floorandceil(nums, x);
    cout << "Floor: " << ans.first << endl;
    cout << "Ceil: " << ans.second << endl;

    return 0;
}