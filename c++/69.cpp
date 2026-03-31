//auto keyword _ it basically determine the datatype of the keywords
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,4,5,7};
    for(int value: v){
        cout<<value<<" ";                   // it will create a copy only 

    }
    cout<<endl;

   
    vector<pair<int,int>> v_p{{1,2},{3,4}};
    for(auto value: v_p){                                         //auto keyword interpret the value 
        cout<<value.first<<" "<<value.second<<endl;
    }

    return 0;
}
