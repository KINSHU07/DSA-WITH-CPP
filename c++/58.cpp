//stl = container (objects that stores data) + algorithm (procedure to process  data) + iterator (object that points towards an element of a container)
// pairs

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    pair<int , string> p;
   // p = make_pair(69, "kinshu");
   p = {69, "kinshu"};

   pair<int , string> &p1 = p;         //here we passs reference thats why, by changing value of p1 p also changes
   p1.first = 34;
    cout<<p.first<< " "<<p.second;
    cout<<p1.first<< " "<<p1.second;
    return 0;
}

