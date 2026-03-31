//sum of n number
#include<bits/stdc++.h>
using namespace std;

void sums(int i, int s ){
if(i < 1){
   cout<<s<<" ";
    return;
}
sums(i-1 , s+i);
}

int ad(int n){
    if(n == 0) return 0;
    return n+ ad(n-1);

}
int main(int argc, char const *argv[])
{
    int n ; 
    cin>>n ;
    sums(n, 0 );
    cout<<ad(10);
    return 0;
}


