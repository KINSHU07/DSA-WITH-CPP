//peak element in mountain array
 //leetcode 852
#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int> arr){
    int st = 1, end = arr.size()-2;
     
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid-1]< arr[mid ] && arr[mid]> arr[mid+1]){ 
            return mid;
        }
        else if( arr[mid-1] < arr[mid]){
            st = mid +1;
        }
        else {
            end = mid-1;
        }
            
    }
    return -1; 
}
int main(int argc, char const *argv[])
{
    vector<int> mountainarr= {0,10,5,2};
    int peakindex = peak(mountainarr);
    cout<<peakindex<<endl;
    cout<<mountainarr[peakindex];
    return 0;
} 
