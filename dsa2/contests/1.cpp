#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int> arr;
        for(int i =0; i<n; i++){
            int x;
            cin >>x;
            arr.push_back(x);
        }
        int sum = 0;
        for(int i =0; i<n; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }
}