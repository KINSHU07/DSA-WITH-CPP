//remove duplicate

#include<bits/stdc++.h>
using namespace std;

vector<int> removeduplicate(int arr[], int n){
    set<int> st;

    for (int i = 0; i < n; i++){
        st.insert(arr[i]);
    }

    vector<int> result;
    for(auto it : st){
        result.push_back(it);
    }
    return result;
}

int main(){
    int arr[] = {1,1,2,2,2,3,4,4,5};
    int n = 9;

    vector<int> ans = removeduplicate(arr, n);

    for(int x : ans){
        cout << x << " ";
    }
}
