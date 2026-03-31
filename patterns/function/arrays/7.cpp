//maximum subarray sum 
//brute force approach
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=6;
    int arr[6]= {1,2,3,4,5,6}; 
    int maxsum = INT64_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = 0; end < n; end++)
        {
            currentSum += arr[end];
            maxsum = max(currentSum, maxsum);
        }
        
    }
    cout<<" max subarray sum: "<<maxsum;
    return 0;
}
