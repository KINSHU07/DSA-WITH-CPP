//linear search

#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int> arr , int key){
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,23,4,5,4,32,1,34,5,3};
   cout<< linear_search(arr, 2);

    return 0;
}
