//maximum points u can obtain from cards

#include<bits/stdc++.h>
using namespace std;

int maxp(vector<int> arr , int k){
int n = arr.size();
int leftsum = 0 , rightsum = 0 , maxsum = 0;

for(int i = 0 ; i < k ; i++){
leftsum += arr[i];
}
maxsum = leftsum;
int rightidx = n-1;
for(int i = k-1 ; i >= 0; i--){
    leftsum -= arr[i];
    rightsum += arr[rightidx];
    rightidx--;
    maxsum = max(maxsum  , rightsum + leftsum);
}
return maxsum;

}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1 ,2 ,3,4,5,1 ,2,9,-3};
    cout<<maxp(arr , 4);
    return 0;
}
