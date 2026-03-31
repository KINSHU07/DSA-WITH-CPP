//check the number of set bit

#include<iostream>
using namespace std;

int cou(int n){
    int cnt = 0;
    while(n > 1){
        if(n % 2 == 1) cnt++;
        n = n/2;
    }
    if(n == 1) cnt+=1;
        return cnt;
}

int main(int argc, char const *argv[])
{
    cout<<cou(15);
    return 0;
}
