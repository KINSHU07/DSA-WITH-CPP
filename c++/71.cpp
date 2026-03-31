//given N Strings print the string in order with their frequency #stl

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string,int> m;
    int n;
    cin>>n;
   for (int i = 0; i<n ; i++)
   {
    string s;
    cin>> s;
    m[s]++;
   }
   for(auto value : m){
    cout<<value.first<<" "<<value.second;
   }
return 0;
}
