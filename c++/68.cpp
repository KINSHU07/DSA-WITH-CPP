#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,4,5,7};
    for(int value: v){
        cout<<value<<" ";                   // it will create a copy only 

    }

    //suppose if we take value ++
   
    for(int value: v){
        value++;                  
    }
    for(int value: v){                          //it passes as a copy thats why it does not change
        
        cout<<value<<" ";                  
    }

    //reference 
    for(int &value: v){
        value++;                  
    }
    for(int value: v){               //if we use reference it will passes the original value           

        cout<<value<<" ";                  
    }
    // for pairs
    vector<pair<int,int>> v_p{{1,2},{3,4}};
    for(pair<int,int> value: v_p){
        cout<<value.first<<" "<<value.second;
    }

    return 0;
}
