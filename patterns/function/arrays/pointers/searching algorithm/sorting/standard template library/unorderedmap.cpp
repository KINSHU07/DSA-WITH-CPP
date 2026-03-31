#include<iostream>
#include<map>
#include<unordered_map>    //data is not arranged in sorted form
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string,int> m;
m["tv"] = 60;
m["headphpne"] = 50;
m["monitor"] = 30;
m["mouse"] = 10;
m["tablet"] = 20;

m.insert({"camera", 90});    //we have to make objects
m.emplace( "amo", 20);       //we dont have to make objects

for(auto p: m){
    cout<<p.first<<" "<<p.second<<endl;
}

if (m.find("camera") != m.end() )
{
    cout<<"item found";
} else
{
    cout<<" item dont find";
}


    return 0;
}
