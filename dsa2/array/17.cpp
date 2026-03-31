#include<bits/stdc++.h>
using namespace std;

int sum_Max(vector<int> arr){
    int max_sum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}
int kadanes(vector<int> arr){
    int sum = 0;
    int maxi =0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+= arr[i];
        maxi = max(sum , maxi);
    }
    return maxi;
    
}
int main()
{
    vector<int> a ={1,2,3,4,55,6,77,-110};
    cout << sum_Max(a)<<" ";
    cout << kadanes(a);
    return 0;
}
