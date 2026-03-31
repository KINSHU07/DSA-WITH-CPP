//check if a number is set or not

#include<bits/stdc++.h>
using namespace std;

bool setbit(int n , int i){
    if( (n >>i) & 1  == 0){
        return true;
    } else{
        false;
    }
}

int main(int argc, char const *argv[])
{
    cout<< setbit(4 , 1);
    return 0;
}
