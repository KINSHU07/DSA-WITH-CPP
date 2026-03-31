//reverse a string

#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    string str = "KINSHU KESHRI";
    int  st = 0 , end = str.size()-1;
    while(st < end){
        swap(str[st] , str[end]);
        st++;
        end--;
    }

cout<<str;

reverse(str.begin(), str.end());
cout<<str;


    return 0;
}
