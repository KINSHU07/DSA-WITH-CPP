//put zeroes to the last

#include<bits/stdc++.h>
using namespace std;

void last(vector<int> &z){
    int n = z.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if(z[i] != 0){
            temp.push_back(z[i]);
        }
    }
    
    for (int i = 0; i < temp.size(); i++)
    {
        z[i] = temp[i];
    }

    for(int i = temp.size(); i < n; i++){
        z[i] = 0;
    }
    
}

void last_optimal(vector<int> &zero){
     int n = zero.size();
    int j = -1;

    
    for(int i = 0; i < n; i++){
        if(zero[i] == 0){
            j = i;
            break;
        }
    }

    
    if(j == -1) return;

   
    for(int i = j + 1; i < n; i++){
        if(zero[i] != 0){
            swap(zero[i], zero[j]);
            j++;
        }
    }

    
}

int main(int argc, char const *argv[])
{
    vector<int> n ={1,0,2,0,3,0,4,0,5,0};
    // last(n);

    // for(auto it: n){
    //     cout<<it<<" ";
    // }

    last_optimal(n);

    for(auto it: n){
        cout<<it<<" ";
    }
    return 0;
}
