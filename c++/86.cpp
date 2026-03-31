//the inbuilt sort algorithm is little unique like if we want to swap then we have to return false on it and if we donot want to swap we have to return true on it
#include <bits/stdc++.h>
using namespace std;

// bool should_iswap(int a , int b){
//     if(a < b) return true;
//     return false;
// }
// bool should_iswap(pair<int , int> a , pair<int , int> b ){
//     if(a < b) return true;
//     return false;
// }
bool should_iswap(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    else
    {
        if (a.second > a.first)
            return true;
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
   sort(a.begin(), a.end() , should_iswap);                        //should iswap is a comperator function
   // sort(a.begin(), a.end());                        // nlog (n)
    // for (int i = 0; i < n; i++) // n^2
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (should_iswap(a[i], a[j]))
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}
// it take two inputs as address first where to start and second where to end +1



