#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >>k;
        multiset<long long> bags;
        for (int i = 0; i <n; i++)
        {
            long long c_count;
            cin>> c_count;
            bags.insert(c_count);
        }
        long long total_c =0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (-- bags.end());           // it tends to the the maximum element in the bags
        long long c_count = *last_it;
        total_c += c_count;
        bags.erase(last_it);
        bags.insert(c_count/2);

        }
        cout<<total_c<<endl;
    }
    
    return 0;
}
