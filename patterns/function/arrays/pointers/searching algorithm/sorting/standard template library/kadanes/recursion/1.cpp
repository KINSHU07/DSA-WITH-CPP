//check if a array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

bool is_sorted(vector<int> a , int n){
    if(n ==0 || n ==1){
        return true;
    }
    return a[n-1] >= a[n-2] && is_sorted(a,n-1);
}


int main(int argc, char const *argv[])
{
    vector<int> arr = {1,3,5,7,9,13,124};
  bool a =is_sorted(arr, arr.size());
  cout<<a;
    return 0;
}

