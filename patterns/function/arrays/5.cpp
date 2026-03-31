//leet code 136
//unique element in the array

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> nums= {1,2,3,4,55,4,3,2,1};
    int ans=0;
    for(int val: nums){
        ans = ans ^ val;
    }
    cout<<ans;


    
    return 0;
}
