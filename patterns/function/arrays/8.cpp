//kadane's algorithm
 //leetcode prob 53
 #include<iostream>
 #include<vector>

 using namespace std;
 int main(int argc, char const *argv[])
 {
    vector<int> nums = {-1,-4,3,21,-43,90,-23,23};
   int cursum=0;
   int maxsum = INT64_MIN;

    for(int val : nums){
        cursum += val;
        maxsum = max(cursum, maxsum);

        if (cursum<0){
            cursum=0;
        } 
       }
    cout<<maxsum<<endl;
    return 0;
 }
 