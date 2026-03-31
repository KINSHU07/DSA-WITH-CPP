//union of 2 sorted array

#include<bits/stdc++.h>
using namespace std;

void union_arr(int a[], int b[] , int n, int m){
    int i = 0 , j = 0;
    vector<int> result;
    
    while(i < n && j <m){
        if(a[i] < b[j]){
            result.push_back(a[i]);
            i++;
        }
        else{
            result.push_back(b[j]);
            j++;
        }
    }

    while(i < n){
        result.push_back(a[i]);
        i++;
    }
    while(j < m){
        result.push_back(b[j]);
        j++;
    }
    int k = result.size();

    set<int> st;
    for (int i = 0; i < k; i++)
    {
        st.insert(result[i]);
    }
    
    for(auto it: st){
        cout<<it<<" ";
    }

}



vector<int> sorted_array(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();

    int i = 0 , j = 0;
    vector<int> result;
    while(i< n && j < m){
        if(a[i] < b[j]){
            if(result.size()== 0 || result.back() != a[i]){
                result.push_back(a[i]);
            }
            i++;
        }
        else{
            if(result.size()== 0 || result.back() != b[j]){
                result.push_back(b[j]);
            }
            j++;
        }
        
    }
    while(i < n){
        if(result.size()== 0 || result.back() != a[i]){
            result.push_back(a[i]);
        }
        i++;
    }
    while(j < m){
        if(result.size()== 0 || result.back() != b[j]){
        result.push_back(b[j]);
        }
        j++;
    }


 return result;
}
int main(int argc, char const *argv[])
{
    int arr1[6] = {1,2,3,4,5,1};
    int arr2[6] = {1,2,3, 7,8 ,9};
    

    vector<int> a={2,4,6,8};
    vector<int> b = {1,3,5,7};
    union_arr(arr1, arr2,6,6);
    cout<<endl;
    vector<int> c = sorted_array(a , b);
    for(auto it: c){
        cout<<it<<" ";
    }

    return 0;
}
