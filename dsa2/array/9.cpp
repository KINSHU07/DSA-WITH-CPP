//intersection of two array
#include<bits/stdc++.h>
using namespace std;

vector<int> inter(vector<int> &A , vector<int> &b, int n , int m){

    vector<int> result;
    int vis[m] = {0};
     
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i] == b[j] && vis[j] == 0){
                result.push_back(A[i]);
                vis[j] = 1;
                break;
            }

            if(b[j] > A[i]){
                break;
            }
        }
        
        
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    vector<int> a={2,4,6,8};
    vector<int> b = {1,2,3,4,5,7};
   vector<int> c =  inter(a, b,4 , 6);

   for(auto it: c){
    cout<<it<<" ";
   }
    return 0;
}
