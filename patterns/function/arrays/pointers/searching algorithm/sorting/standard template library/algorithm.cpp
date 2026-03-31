//sorting
#include<bits./stdc++.h>
using namespace std;


//comparator for sorting wrt second value
bool comparator(pair<int,int>p1 , pair<int,int> p2){
    if (p1.second < p2.second)
    {
        return true;
    } else{
        return false;
    }
    
}
int main(int argc, char const *argv[])
{
    vector<int> vec ={1,90,76,45};

    sort(vec.begin(), vec.end());
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    int arr[7] ={2,12,32,1,2,34,23};

    sort(arr, arr+7 , greater<int>());
    for(auto c: arr ){
        cout<<c<<" ";
    }
cout<<endl;

    vector<pair<int,int>> p ={{1,2},{3,2},{3,1},{8,7}};
    sort(p.begin(), p.end(), comparator);            //function call
    for(auto l: p){
        cout<<l.first<<" "<<l.second<<endl;
    }
    cout<<endl;
    return 0;
}
