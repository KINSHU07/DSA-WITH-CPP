#include<bits/stdc++.h>
#include<vector>
using namespace std;

int sumk(vector<int> arr, int key){
    int n = arr.size();
    int length = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == key)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}


int longest(vector<int> arr, long long key){
    map<long long, int> mpp;
    long long sum = 0;
    int len = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if(sum == key){
            len = max( len , i+1);

        }
        long long rem = sum -key;
        if(mpp.find(rem) != mpp.end()){
            int l = i - mpp[rem];
            len = max(len , l);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return len;

}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,1,1,1,1,1,1,1,1,1,1};
    cout << sumk(a, 10);
    cout<<longest(a, 5);
    return 0;
}
