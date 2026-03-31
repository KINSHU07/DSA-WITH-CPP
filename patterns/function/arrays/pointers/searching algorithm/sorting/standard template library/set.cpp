#include<iostream>
#include<set>
using namespace std;
int main(int argc, char const *argv[])
{
   set<int> s;
   s.insert(1);
   s.insert(23);
   s.insert(1);
   s.insert(34);
   s.insert(3);
   s.insert(2);

    cout<<*(s.lower_bound(3))<<endl;
    cout<<*(s.upper_bound(3))<<endl;

   for( auto i: s){
    cout<<i<<" ";          //only store the unique elements
   }
    return 0;
}
