//algorithm in cpp
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *(min_element(v.begin(), v.end()));         //return the min element in the conatiner
    cout<< "MIN: "<<min <<endl;
    int max = *(max_element(v.begin()+2, v.end()));       //return the max element in the conatiner
    cout<<"MAX: "<< max <<endl;
    int sum = accumulate(v.begin() , v.end(), 0);        //return the sum of all element of the conatiner + the value which we intiallize into it
    cout<<"SUM: "<<sum<<endl;
    int ct = count(v.begin() , v.end(), 6);              // return the number of times the value occurs
    cout<<"COUNT: " <<ct <<endl;
    auto it = find(v.begin() , v.end(), 8);             //return the index of the value
    if (it != v.end()){
    cout<<"FIND: "<< *it <<endl;
    }else
    cout<<"item not found";

    reverse(v.begin() , v.end());
    for(auto val : v){
        cout<<val<<" ";
    }
    return 0;
}

// in case of vector it has  o(n)
// in case of sets and maps its  log(n)