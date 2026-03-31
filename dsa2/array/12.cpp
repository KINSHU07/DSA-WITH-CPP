//element that appear once
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int once(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i];
        int count = 0;

        for (int j = 0; j < a.size(); j++)
        {
            if(a[j] == num){
                count++;
            }
        }

        if(count == 1) return num;
    }
    return 0;
}
int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;;
        }
        for(auto i : mp){
            if(i.second==1) return i.first;
    }
    return 0;
}
int optimal(vector<int> m){
    int n = m.size();
    int x =0;
    for (int i = 0; i < n; i++)
    {
         x ^= m[i];
    }
    
    return x;
}
int main()
{
    vector<int> num = {11,11,22,22,33,44,44,55,55};
    cout << once(num)<<" ";
    cout<<optimal(num);
    return 0;
}
