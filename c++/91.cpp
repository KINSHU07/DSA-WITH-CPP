#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x > 0;
}
int main(int argc, char const *argv[])
{
    // auto sum = [](int x , int y){return x+y;};        lambda function
    // cout<<sum(9,10);

    vector<int> v = {-2,-1,-5};
    cout<< all_of(v.begin() , v.end(), [](int x){return x>0;})<<endl;       //in this it depends on all vector , if  element in vector satisy thenit satisfy 
    cout<< all_of(v.begin() , v.end(), is_positive)<<endl;                    
    cout<< any_of(v.begin() , v.end(), [](int x){return x>0;})<<endl;       //in this it depends on any one or more elemnt in vector , if one element in vector satisy then it satisfy  then it satisy
    cout<< none_of(v.begin() , v.end(), [](int x){return x>0;})<<endl;       //in this if any element is not satisfying the condition it will return false
    return 0;
}
