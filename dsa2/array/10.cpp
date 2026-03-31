//find the missing number

#include<bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = 0; j < n ; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                return i;
            }
        }
        return n;
    }

int better(vector<int> &arr){
    int n = arr.size();
    int hash[n+1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if(hash[i] == 0){
            return i;
        }
    }
    return n;
    
}

int optimal(vector<int> a){
    int n = a.size();
    int sum = n * (n+1) /2;
int sum_e =0;
    for (int i = 0; i < n; i++)
    {
        sum_e += a[i];
    }
    return sum - sum_e;

}
int main(int argc, char const *argv[])
{
    vector<int> a = {0,1,3,4,5};
   int c = missingNumber(a);
   cout<<c;
   cout<<endl;
   int d = better(a);
   cout<<d;
   int e = optimal(a);
   cout<<e;
    return 0;
}
