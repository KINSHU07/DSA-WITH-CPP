//maximum subarray sum
//brute force approach
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[6] = {1,2,3,4,5,-6};
    int n = 6;

     int maxsum = INT16_MIN;
    for(int i = 0 ; i < 6 ; i++){         //start
        int cursum = 0;
        for(int j = 0 ; j < n; j++){      //end
            cursum += arr[j];
            maxsum = max(cursum, maxsum);
        }

    }
    cout<<maxsum;
    return 0;
}
