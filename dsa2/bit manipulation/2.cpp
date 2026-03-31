//binary to decimal
#include<bits/stdc++.h>
using namespace std;

int binary2dec(string s){
    int n = s.size();
    int p2 = 1;
    int num =0;
    for(int i = n -1 ; i >=0 ; i--){
        if(s[i] == '1'){
            num = num + p2;
        }
        p2 = p2 *2;
    }
    return num;
}
int main(int argc, char const *argv[])
{
    int s = binary2dec("1010");
    cout<<s<<endl;

    return 0;
}
