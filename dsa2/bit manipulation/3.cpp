//swap two numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 9 ;
    int b = 10;

    a = a^b;
    b = a^ b;
    a = a^ b;

    cout<< a << " "<<b;
    return 0;
}