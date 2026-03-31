#include <bits/stdc++.h>
using namespace std;

void rev(string &r){
    int i = 0;
    int j = r.size() - 1;
    while(i < j){
        swap(r[i], r[j]);
        i++;
        j--;
    }
}

string onesComplement(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
    return s;
}
string twocom(string s){
    s = onesComplement(s);
    int carry = 1;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == '1' && carry == 1){
            s[i] = '0';
        }
        else if(s[i] == '0' && carry == 1){
            s[i] = '1';
            carry = 0;
        }
    }
    if(carry == 1) s = "1" + s;

    return s;
}
string convert2binary(int n){
    if(n == 0) return "0";

    string res = "";

    while(n > 0){
        if(n % 2 == 1) res += '1';
        else res += '0';
        n = n / 2;
    }

    rev(res);
    return res;
}


int main(){
    string res = convert2binary(10);
    cout << res;
    return 0;
}
