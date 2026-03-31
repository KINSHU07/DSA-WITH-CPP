//buy and sell stock 1
#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0;
        int mini = prices[0];
        for(int i = 0;i < n ; i++){
            int cost = prices[i] - mini;
            profit = max(cost, profit);
            mini = min(mini, prices[i]);
        }
        return profit;
}

int main(int argc, char const *argv[])
{
    vector<int> a={2,4,1,3,4,5,3,2,1,10};
cout<<maxProfit(a);
    return 0;
}
